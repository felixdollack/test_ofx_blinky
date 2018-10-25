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
    ofSetColor(ofColor::white);
    ofDrawBitmapString("press spacebar: blinking", 10, 15);
    ofDrawBitmapString("press o: ON", 10, 30);
    ofDrawBitmapString("press x: OFF (also blinking)", 10, 45);
    ofDrawBitmapString("press 0: beep off", 10, 60);
    ofDrawBitmapString("press 1: beep at ON state", 10, 75);
    ofDrawBitmapString("press 2: beeps at ON and OFF state ", 10, 90);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 32) { // space
        my_blinky->setBlinking(!my_blinky->isBlinking());
    }
    if (key == 'o') {
        if (my_blinky->isBlinking() == true) {
            my_blinky->setBlinking(false);
        }
        my_blinky->setBlinkyOn(true);
    }
    if (key == 'x') {
        if (my_blinky->isBlinking() == true) {
            my_blinky->setBlinking(false);
        }
        my_blinky->setBlinkyOn(false);
    }
    if (key == 48) {
        my_blinky->setBeepMode(BeepMode::BEEP_OFF);
    }
    if (key == 49) {
        my_blinky->setBeepMode(BeepMode::BEEP_ON_START);
    }
    if (key == 50) {
        my_blinky->setBeepMode(BeepMode::BEEP_ON_END);
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
