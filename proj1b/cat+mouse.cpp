#include "positions.h"
#include <iostream>
#include <cmath>
#include <assert.h>


using namespace std;

/*
* Coverts degress to radians 
*/
float degreeToRadians(float degree) {
    return ((degree) * M_PI / 180.0); 
}


/**
 * You define the GetPositions function.
 * It should read legal cat and mouse positions from the user
 * and return the position values in its two arguments.
 */
void GetPositions(Position &cat, Position &mouse){
    int catDegrees;
    float catRadius; 
    int mouseDegrees;  
    float mouseRadius;

    // TODO: You fill this in
    cout << "Cat Degree: " << endl; 
    cin >> catDegrees;
    cout << "Cat Radius: " << endl;  
    cin >> catRadius;

    cout << "Mouse Degree: " << endl;
    cin >> mouseDegrees; 
    cout << "Mouse Radius: " << endl; 
    cin >> mouseRadius; 

    assert((catDegrees >= 0 && catDegrees <= 360) && (mouseDegrees >= 0 && mouseDegrees <= 360));
    
    // convert to Radians
    float catRadians = degreeToRadians(catDegrees);
    float mouseRadians = degreeToRadians(mouseDegrees);

    cat = Position(catRadius, catRadians); 
    mouse = Position(mouseRadius, mouseRadians);
    
}

/**
 * You define the RunChase function.
 * Given initialized cat and mouse positions,
 * it should simulate the cat chasing the mouse, printing the 
 * result of each movement of cat and mouse.  Either the cat will 
 * catch the mouse, or 30 time units will go by and the cat will 
 * give up.
 */
void RunChase(Position cat, Position mouse)
{   

    // cat is caught 
    while(cat.myRadius * cos(cat.myAngleInRadians - mouse.myAngleInRadians) < 1) {

    }
    // once we exit same as cat sees mouse 
}

int main()
{
    Position cat, mouse;
    GetPositions(cat, mouse);
    RunChase(cat, mouse);

    return 0;
}
