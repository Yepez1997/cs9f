/* proj1b
* @author Aureliano Yepez
*/
#include <iostream>
#include <cmath>
#include "positions.h"

// Imlementation of Positions class
using namespace std; 

Position::Position(float radius, float radians) {
    myRadius = radius;
    myAngleInRadians = radians;
}


bool Position::Sees(Position pos) const{ 
    // if condition 
    return true; 
}

void Position::Print() const {
    cout << "Radius " << myRadius << "Radians: " << myAngleInRadians << endl; 
}


 void Position::IncrementPosition(float rChange, float angularDistChange) {
    myRadius += rChange;
    myAngleInRadians += angularDistChange; 
 }