/*
* Name: Dominic Garrity, 5
* Description: Design a class that represents a water tank.
* Input: width, length, height, level
* Output: volume of tank and water in tank. 
*/
#include <iostream>
#include "WaterTank.h"

using namespace std;

/*
* function_identifier: parameterizes empty object with default values
* parameters: n/a
* return value: default values
*/ 
WaterTank::WaterTank() {
    width = 1.0;
    length = 1.0;
    height = 1.0;
    level = 0.0;
}

/*
* function_identifier: takes in different values for object
* parameters: double w, double l, double h, double lvl
* return value: parameterized object
*/ 

WaterTank::WaterTank(double w, double l, double h, double lvl) {
    width = w;
    length = l;
    height = h;
    level = lvl;
}

/*
* function_identifier: finds max volume of tank
* parameters: object parameters
* return value: double volume
*/ 
double WaterTank::MaxVol() const{
    double volume;
    volume = length * width * height;
    return volume;
}

/*
* function_identifier: gives volume of water in tank
* parameters: n/a
* return value: volume of water in tank
*/ 

double WaterTank::WaterVol() const{
    double agua;
    agua = length * width * level;
    return agua;
    
}

/*
* function_identifier: adds water to tank
* parameters: int l, w, h
* return value: 
*/ 
void WaterTank::AddWater(double water){
    level += (water / width * length);
}

/*
* function_identifier: reduces water volume
* parameters: water
* return value:
*/ 
void WaterTank::DrawWater(double water){
    level -= (water / width * length);
}

/*
* function_identifier: compares water volumes
* parameters: two tank objects
* return value:true or false
*/ 
bool WaterTank::operator==(WaterTank &tank2) const {
    double t1, t2;
    t1 = WaterVol();
    t2 = tank2.WaterVol();
    
    return t1 == t2;
}

/*
* function_identifier: checks if tank 1's water volume is greater than tank 2's
* parameters: two tank objects
* return value: true or false
*/ 
bool WaterTank::operator>(WaterTank &tank2) const {
    double t1, t2;
    t1 = WaterVol();
    t2 = tank2.WaterVol();
    
    return t1 > t2;
}

/*
* function_identifier: checks if tank 1's water volume is less than tank 2's
* parameters: two tank objects
* return value: true or false
*/ 
bool WaterTank::operator<(WaterTank &tank2) const {
    double t1, t2;
    t1 = WaterVol();
    t2 = tank2.WaterVol();
    
    return t1 < t2;
}

/*
* function_identifier:checcks if tank1 can take all of the water from tank 2, if it can it'll add water to second tank. if not throws an exception.
* parameters: two tank objects
* return value: true or false
*/ 
bool WaterTank::operator+(WaterTank &tank2) const {
    
}