#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    ofVec2f v1, v2, v3, v4;
    
    vector<ofVec2f> triangleA;

    ofColor triangleColor = ofColor(0,255,255);
    
    vector<vector<ofVec2f>> visibleTriangles;
    
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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
