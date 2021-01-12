#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(20);
    recalcLine(&linev1);
}

void ofApp::recalcLine(ofPolyline* line) {
    //v1.clear();
    //    v1.push_back({0, ofGetHeight()});
    line->clear();
    for (int i = 0; i < ofGetWidth()-1; i+=3) {
        glm::vec2 point1 = glm::vec2(i, ofMap(ofNoise(i * 0.001, ofGetFrameNum()*0.00001,fv+=0.000001), 0, 1, 0, ofGetHeight()));
        //v1.push_back(point1);
        line->addVertex(point1.x, point1.y);
    }
    //v1.push_back({ ofGetWidth() - 1, ofGetHeight() });
}

//--------------------------------------------------------------
void ofApp::update(){
    int maxLines = ofGetHeight() / 4;
    int lineSpacer = 3;
    
    recalcLine(&linev1);
    layer1.clear();
    std::vector<glm::vec3> points = linev1.getVertices();
    
    for (int lineCount = 1; lineCount <= maxLines; ++lineCount) {
        ofPolyline copiedLine;
        for (int i = 0; i < linev1.size(); i++) {
            glm::vec3 p = points.at(i);
            p.x += lineSpacer * lineCount;
            copiedLine.addVertex(p);
        }
        layer1.push_back(copiedLine);
    }
    

    

}

//--------------------------------------------------------------
void ofApp::draw(){
    //linev1.draw();
    
    for (std::vector<ofPolyline>::iterator it = layer1.begin() ; it != layer1.end(); ++it) {
        (*it).draw();
    }
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
