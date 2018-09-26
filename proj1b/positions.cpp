/* proj1b
* @author Aureliano Yepez
*/
#include <cmath>
#include "positions.h"

// Imlementation of Positions class

Position::Position(float radius, float radians) {
    myRadius = radius;
    myAngleInRadians = radians;
}


bool Position::Sees(Position pos) const{ 
    
    return true; 
}

