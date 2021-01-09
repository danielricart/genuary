#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    vector<glm::vec2> v, v2, v3;
    double fv=777, fv2=132, fv3=0;
    void dancingShapes();
    
    ofPolyline linev1;


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
