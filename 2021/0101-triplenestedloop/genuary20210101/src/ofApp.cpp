#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    value.set("value", 0.5, 0, 1); // name, default value, min, max
    gui.setup();
    gui.add(value);
    cout << "Welcome!" << endl;

}

//--------------------------------------------------------------
void ofApp::update(){
    valueSet = value.get();
    triangleSize = ofClamp(50*valueSet,1, 50*1.0f);
    colorRed = 255*valueSet;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(colorRed, colorGreen, colorBlue);

    for (int f1 = 0; f1 < ofGetWidth(); f1+=triangleSize) { // control amount of triangles LtoR
        for (int f2 = 0; f2 < ofGetHeight(); f2+=triangleSize) { // control amount of lines of triangles
            ofSetColor(colorRed, 255*1-valueSet, ofRandom(255));

            glm::vec2 p1, p2, p3;
            p1 = glm::vec2(f1, f2);
            p2 = glm::vec2(f1, f2+triangleSize);
            p3 = glm::vec2(f1+triangleSize, f2+triangleSize);
            
            ofDrawTriangle(p1, p2, p3);
            
            for (int f3 = 0; f3 < triangleSize; f3+=3) {  // control dot generation.
                ofSetColor(0,0,255);
                ofDrawCircle(f1+f3, f2+f3, 1);
            }
        }
    }
    
//    draw last to make sure interface always shows on top of everything.
    gui.draw();
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
