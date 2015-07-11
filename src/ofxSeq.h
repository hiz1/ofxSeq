//
//  ofxSeq.h
//  example
//
//  Created by hiz on 2015/07/10.
//
//

#ifndef __example__ofxSeq__
#define __example__ofxSeq__

#include <stdio.h>
#include <string>
#include <vector>
#include <functional>

// 関数用のSeq
class ofxSeq {
public:
    typedef bool (*FUNC)();
    ofxSeq() : valid(true), currentId(0){}
    // 関数の追加
    void addFunc(FUNC func) {
        funcs.push_back(func);
    }
    // 順次処理
    void update() {
        if(!valid || currentId >= funcs.size()) {
            valid = false;
            return;
        }
        if(!funcs[currentId]()) {
            currentId ++;
        }
    }
    // Seqが終了した場合、trueを返す
    bool isValid() {return valid;}
    // 現在のSEQIDを返す
    int  getCurrentId() {return currentId;}
private:
    std::vector<FUNC> funcs;
    int   currentId;
    bool valid;
};


// メンバ関数用のSeq
template <typename CLS>
class ofxClassSeq  {
public:
    typedef bool (CLS::*FUNC)() ;
    ofxClassSeq()  : valid(true), currentId(0), obj(NULL){
    }
    // 関数の追加
    void addFunc(FUNC func) {
        funcs.push_back(func);
    }
    // 順次処理
    void update() {
        if(!valid || currentId >= funcs.size()) {
            valid = false;
            return;
        }
        if(obj != NULL && !(obj->*funcs[currentId])()) {
            currentId ++;
        }
    }
    // オブジェクトのセット
    void setObj(CLS *obj) { this->obj = obj;}
    // Seqが終了した場合、trueを返す
    bool isValid() {return valid;}
    // 現在のSEQIDを返す
    int  getCurrentId() {return currentId;}
private:
    std::vector<FUNC> funcs;
    int   currentId;
    bool valid;
    CLS  *obj;
};

#endif /* defined(__example__ofxSeq__) */
