#include "ofApp.h"
#include <random>
//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
std::random_device rd;

std::mt19937 eng1(rd());

int min = 0;
int x_max = 1200;
int y_max = 970;
std::uniform_int_distribution<> X_uniform(min, x_max);
for (int j = 0; j < 20; j++){
    X[j] = X_uniform(eng1);
}
std::uniform_int_distribution<> Y_uniform(min, y_max);
for (int k = 0; k < 20; k++){
    Y[k] = Y_uniform(eng1);
}
//X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);
for(int i = 0; i < 20; i++)
 {
   jewel.draw(X[i], Y[i]);
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
