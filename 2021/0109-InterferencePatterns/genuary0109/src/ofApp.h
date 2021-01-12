#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    vector<glm::vec2> v1, v2, v3;
    vector<ofPolyline> layer1, layer2;
    ofPolyline linev1, linev2, linev3;
    
    double fv=777, fv2=132, fv3=0;
    
	public:
		void setup();
    void recalcLine(ofPolyline* line);
    
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
