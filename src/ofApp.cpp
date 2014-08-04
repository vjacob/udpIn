#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //we run at 60 fps!
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    
    //create the socket and bind to port 11999
	udpConnection.Create();
	udpConnection.Bind(20000);
	udpConnection.SetNonBlocking(true);
    
    printf("UDP: Listening to port 20000.\n");
    printf("Ready to receive!\n");
    
	ofSetBackgroundAuto(false);
	ofBackground(255, 255, 255);

}

//--------------------------------------------------------------
void ofApp::update(){
    // receiving unsigned bytes!
    UInt8 udpMessage[14];
    
	udpConnection.Receive((char *)udpMessage,sizeof(udpMessage));
    
    if (udpMessage[0] == 0x01) {
        printf("Receiving: ");
        for (int i = 0; i != sizeof(udpMessage); ++i)
        {
            printf("0x%02X ", udpMessage[i]);
        }
        printf("\n");
    }

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
