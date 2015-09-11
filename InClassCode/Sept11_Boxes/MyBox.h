//
//  MyBox.h
//  gilgamesh_and_floods
//
//  Created by Shawn Lawson on 9/11/15.
//
//

#ifndef __gilgamesh_and_floods__MyBox__
#define __gilgamesh_and_floods__MyBox__

#include "ofMain.h"

class MyBox {
    
    ofVec3f position;
    ofVec3f velocity;
    ofVec3f acceleration;
    ofVec3f rotationAngle;
    float   rotationSpeed;
    
    ofColor faceColor;
    ofColor lineColor;
    
    ofMesh mesh;
    
public:
    MyBox();
    MyBox( ofVec3f startPosition,
           ofVec3f startVelocity,
           ofVec3f startAcceleration);
    
    void update();
    void draw();
    
};

#endif /* defined(__gilgamesh_and_floods__MyBox__) */
















