#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    v1 = ofVec2f(ofGetWidth()/2, 0); //Top center
    v2 = ofVec2f(0, ofGetHeight());  // bottom left
    v3 = ofVec2f(ofGetWidth(), ofGetHeight());  // bottom right
    
    triangleA = {v1, v2, v3};
    visibleTriangles.push_back(triangleA);
    
    ofSetBackgroundAuto(true);
    ofSetFrameRate(4);
}

//--------------------------------------------------------------
void ofApp::update(){
    vector<ofVec2f> newtriangleA;

    newtriangleA = {
        triangleA.at(0).getMiddle(triangleA.at(1)),
        triangleA.at(0).getMiddle(triangleA.at(2)),
        triangleA.at(1).getMiddle(triangleA.at(2))
    };
    triangleA = newtriangleA;
        
    visibleTriangles.push_back(newtriangleA);
    
    std::printf("%d \n", ofGetFrameNum());
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (std::vector<vector<ofVec2f>>::iterator it = visibleTriangles.begin() ; it != visibleTriangles.end(); ++it) {
//        this->triangleColor.invert();

        int r, g, b;
        r = triangleColor.r;
        g = triangleColor.g;
        b = triangleColor.b;
        
        r+=20;
        g-=20;
        b+=10;
        
        triangleColor.r = r % 256;
        triangleColor.g = g % 256;
        triangleColor.b = b % 256;
        
        ofSetColor(triangleColor);

        ofDrawTriangle((*it).at(0), (*it).at(1), (*it).at(2));
        
    };
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
