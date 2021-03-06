#pragma once

#include "ofMain.h"
#include "./ofx_blinky/ofx_blinky.h"

class ofApp : public ofBaseApp{

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
		
        Blinky* my_blinky, *low_blinky, *high_blinky;
        float my_blinky_size, low_blinky_size, high_blinky_size;
        ofColor my_blinky_color, low_blinky_color, low_blinky_second_color, high_blinky_color;
        ofVec2f my_blinky_position, low_blinky_position, high_blinky_position;
};
