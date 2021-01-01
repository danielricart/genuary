#pragma once
#include "ofxGui.h"

#include "ofMain.h"

class ofApp : public ofBaseApp{
//private
    ofParameter<float> value;
    ofxPanel gui;
    
    int colorRed = 0;
    int colorGreen = 0;
    int colorBlue = 0;
    
    int triangleSize = 1;
    float valueSet = 0.0f;
        
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
