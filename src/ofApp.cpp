#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // how to set the size of our window
    // then set the position for window
    ofSetWindowShape(500, 500);
//    ofSetWindowPosition(10, 10);
    ofSetWindowTitle("basic example");
    
    counter = 0;
    ofSetCircleResolution(50);
    ofBackground(255,255,255);
    
    
    ofSetFrameRate(60);
    imageExample.load("images/texture.png");
    imageExampleClone.clone(imageExample);
}

//--------------------------------------------------------------
void ofApp::update(){
    counter = counter + 0.033f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // ofGetWidth, ofGetHeight ----- window sizes
    ofDrawBitmapStringHighlight("Hello World!", ofGetWidth()/3, ofGetHeight()/2);
    
    //--------------------------- circles
    //let's draw a circle:
    ofSetColor(255,130,0);
    float radius = 50 + 10 * sin(counter);
    ofFill();        // draw "filled shapes"
    ofDrawCircle(100,400,radius);
    
    // now just an outline
    ofNoFill();
    ofSetHexColor(0xCCCCCC);
    ofDrawCircle(100,400,80);
    
    // use the bitMap type
    // note, this can be slow on some graphics cards
    // because it is using glDrawPixels which varies in
    // speed from system to system.  try using ofTrueTypeFont
    // if this bitMap type slows you down.
    ofSetHexColor(0x000000);
    
    // draw image
    ofSetColor(255, 0, 0);
    imageExample.resize(250, 250);
    imageExample.draw(10, 10);
    
    imageExampleClone.draw(50, 300);
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
    std::printf("button: %i\n", x);
    imageExampleClone.mirror(true, false);
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
