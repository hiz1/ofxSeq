#include "ofApp.h"

int cnt = 0;
bool first() {
    cnt ++;
    ofLogNotice() << "first:" << cnt << endl;
    if(cnt >= 10) return false;
    return true;
}

bool second() {
    cnt ++;
    ofLogNotice() << "second:" << cnt << endl;
    if(cnt >= 10) return false;
    return true;
}

bool third() {
    cnt ++;
    ofLogNotice() << "third:" << cnt << endl;
    if(cnt >= 10) return false;
    return true;
}

bool clear() {
    cnt = 0;
    return false;
}

//--------------------------------------------------------------
void ofApp::setup(){
    seq.addFunc(clear);
    seq.addFunc(first);
    seq.addFunc(clear);
    seq.addFunc(second);
    seq.addFunc(clear);
    seq.addFunc(third);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(seq.isValid()) {
        seq.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
