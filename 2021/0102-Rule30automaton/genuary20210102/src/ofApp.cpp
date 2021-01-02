#include "ofApp.h"
#include <stdio.h>

//--------------------------------------------------------------
void ofApp::setup(){
    std::printf("pattern: ");
    printVector(pattern);
    std::printf("Number of generations: %d\n", maxGenerations);
//
//    std::printf("initial conditions: \n");
//    printVectorVector(data);
//
//    std::printf("----\n");
//    for (int i = 0; i<data.size()-1; i++) {
//        currentGen = evalCellularAutomaton(pattern, currentGen);
//    }
//    std::printf("----\n");
//    printVectorVector(data);
    //
//                               7   6   5   4   3   2   1   0
//    current pattern           111 110 101 100 011 010 001 000
//    new state for center cell  0   0   0   1   1   1   1   0

}

vector<int> ofApp::evalCellularAutomaton(vector<int> pattern, vector<int> currentState) {
    vector<int> newState = vector<int>(currentState.size());
    
//    constant edges.
    for (int i = 0; i<currentState.size(); i++) {
        // fetch the 'cell'
        int left, center, right;
        if (i == 0)
            left = 0; // edges (left is out of bounds) are constant at 0
        else
            left = currentState.at(i-1);
        
        center = currentState.at(i);
        
        if (i == (currentState.size()-1))
            right = 0;  // edges (right is out of bounds) are constant at 0
        else
            right = currentState.at(i+1);
        
        // evaluate cell+neighbours design
        int cell = left*100 + center*10 + right;
//        std::printf("found cell: %03d ", cell);
        // apply pattern
        switch (cell) { // this can be extremely shortened using binary representation of cell instead of multiply and sum.
            case 111:
                newState.at(i) = pattern.at(0);
//                std::printf("new state: %d\n", pattern.at(0));
                break;
            case 110:
                newState.at(i) = pattern.at(1);
//                std::printf("new state: %d\n", pattern.at(1));

                break;
            case 101:
                newState.at(i) = pattern.at(2);
//                std::printf("new state: %d\n", pattern.at(2));

                break;
            case 100:
                newState.at(i) = pattern.at(3);
//                std::printf("new state: %d\n", pattern.at(3));

                break;
            case 11:
                newState.at(i) = pattern.at(4);
//                std::printf("new state: %d\n", pattern.at(4));

                break;
            case 10:
                newState.at(i) = pattern.at(5);
//                std::printf("new state: %d\n", pattern.at(5));

                break;
            case 1:
                newState.at(i) = pattern.at(6);
//                std::printf("new state: %d\n", pattern.at(6));

                break;
            case 0:
                newState.at(i) = pattern.at(7);
//                std::printf("new state: %d\n", pattern.at(7));

                break;
            default:
                std::printf("pattern cell not found\n");
                break;
        }
                
            
    }
    
    return newState;
}

//--------------------------------------------------------------
void ofApp::update(){
    if (currentGenerationCount >= maxGenerations) {
        std::printf("computation ended. Computed %d generations\n", currentGenerationCount);
        ofExit();
        return ;
    }

    currentGen = evalCellularAutomaton(pattern, currentGen);
    currentGenerationCount++;
    
    if (data.size() == storedGenerations)
    {
        data.erase(data.begin());
    }
    data.push_back(currentGen);

    std::printf("----\n");

    printVectorVector(data);
    
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

void ofApp::printVector(std::vector<int> vec) {
    for (int i = 0; i< vec.size(); i++) {
        std::printf("%d ", vec.at(i));
    }
    std::printf("\n");
}

void ofApp::printVectorVector(std::vector<std::vector<int>> vec) {
    for (int i = 0; i< vec.size(); i++) {
        printVector(vec.at(i));
     }
}
