#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    test = new Test("test");
    seq.setObj(test);
    seq.addFunc(&Test::clear);
    seq.addFunc(&Test::first);
    seq.addFunc(&Test::clear);
    seq.addFunc(&Test::second);
    seq.addFunc(&Test::clear);
    seq.addFunc(&Test::third);
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
