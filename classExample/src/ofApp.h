#pragma once

#include "ofMain.h"
#include "ofxSeq.h"

class Test {
public:
    Test(string name) : name(name), cnt(0){}
    bool first() {
        cnt ++;
        ofLogNotice() << name << " first:" << cnt << endl;
        if(cnt >= 10) return false;
        return true;
    }
    bool second() {
        cnt ++;
        ofLogNotice() << name << " second:" << cnt << endl;
        if(cnt >= 10) return false;
        return true;
    }
    bool third() {
        cnt ++;
        ofLogNotice() << name << " third:" << cnt << endl;
        if(cnt >= 10) return false;
        return true;
    }
    bool clear() {
        cnt = 0;
        return false;
    }
private:
    string name;
    int    cnt;
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
private:
    Test              *test;
    ofxClassSeq<Test> seq;
};
