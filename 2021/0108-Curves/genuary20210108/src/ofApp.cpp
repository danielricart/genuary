#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    v.clear();
//    v.push_back({0, ofGetHeight()});
    for (int i = 1; i < ofGetWidth()-1; i+=3) {
        v.push_back(glm::vec2(i, ofMap(ofNoise(i * 0.001, ofGetFrameNum()*0.00001,fv+=0.000001), 0, 1, 0, ofGetHeight())));
    }
    v.push_back({ ofGetWidth() - 1, ofGetHeight() });

    v2.clear();
    v2.push_back({0, ofGetHeight()});

    for (int i=1; i<ofGetHeight()-1; i+=2) {
        v2.push_back(glm::vec2(ofMap(ofNoise(i * 0.005, ofGetFrameNum()*0.00001,fv2+=0.00002), 0, 1, 0, ofGetWidth())
                               , i
                               ));
    }
    v2.push_back({ ofGetWidth() - 1, ofGetHeight() });

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255-0, 255-39, 255-255, 255-50);
    ofSetPolyMode(OF_POLY_WINDING_POSITIVE);

    ofBeginShape();
    for (std::vector<glm::vec2>::iterator it = v.begin() ; it != v.end(); ++it) {
        ofCurveVertex(*it);
    }
    ofEndShape();
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);

    ofSetColor(0, 39, 255, 50);
    ofBeginShape();
    for (std::vector<glm::vec2>::iterator it = v2.begin() ; it != v2.end(); ++it) {
        ofCurveVertex(*it);
    }
    ofEndShape();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
