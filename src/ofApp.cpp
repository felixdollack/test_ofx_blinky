#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    this->my_blinky_size = 12.0f;
    this->my_blinky_color = ofColor::deepSkyBlue;
    this->my_blinky_position = ofVec2f(ofGetWindowWidth()/2 - this->my_blinky_size/2, ofGetWindowHeight()/2 - this->my_blinky_size/2);
    my_blinky = new Blinky(this->my_blinky_size, this->my_blinky_color);
    my_blinky->setPosition(this->my_blinky_position);
}

//--------------------------------------------------------------
void ofApp::update(){
    my_blinky->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    my_blinky->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 32) { // space
        my_blinky->setBlinking(!my_blinky->isBlinking());
    }
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
