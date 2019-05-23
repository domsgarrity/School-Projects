/*
* Name: Dominic Garrity, CS202, 3
* Description: Creat Derived class for a vacation type
* Input: testVacation.cpp
* Output: Vacation details specified on paper */
#include <iostream>
#include <string>
#include "planevacation.h"

using namespace std;

/*
* function_identifier: Default empty constructior
* parameters: No information
* return value: N/A */ 
PlaneVacation::PlaneVacation()
    //: currentID(ID++)
{
    airline = "None";
    airfare = 0.00;
    y = 1;
}

/*
* function_identifier: Regular constructor
* parameters: a string, double, string, string, int, int, and a double
* return value: N/A */ 
PlaneVacation::PlaneVacation(string plane, double tix, string destin, string hName, int numPeople, int numNights, double aNight) 
    : Vacation(destin, hName, numPeople, numNights, aNight) //, //currentID(ID++)
{
    air = Vacation(destin, hName, numPeople, numNights, aNight);
    airline = plane;
    airfare = tix;
    y = 1;
}

/*
* function_identifier: gets the name of the airline
* parameters: object
* return value: name of airline, airline */ 
string PlaneVacation::airName(){
    return airline;
}

/*
* function_identifier: gets cost of airfare
* parameters: object
* return value: the cost of airfare, airfare */ 
double PlaneVacation::airCost(){
    return airfare;
}

/*
* function_identifier: calculates the total cost, with airfare included
* parameters: airfare, number of people
* return value: hotel cost plus the ticket cost */ 
double PlaneVacation::airTotal(){
    double hotelCost, subTotal, tixT;
    
    tixT = airfare * air.getPeople();
    hotelCost = air.getTotal();
    
    subTotal = hotelCost + tixT;
    
    return subTotal;
    
}

/*
* function_identifier: divides subtotal by amount of people for the cost per person
* parameters: airfare, number of people
* return value: cost per, per */ 
double PlaneVacation::airPer(){
    double hotelCost, subTotal, tixT, per;
    
    tixT = airfare * air.getPeople();
    hotelCost = air.getTotal();
    
    subTotal = hotelCost + tixT;
    per = 0;
    if (airfare != 0){
    per += subTotal / air.getPeople();
        return per;
    }
    return per;
    
}

/*
* function_identifier: gets the current object's Id #
* parameters: nada
* return value: object's ID #' */ 
int PlaneVacation::getID(){
    return Vacation::getID();
}