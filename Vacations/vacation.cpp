#include <iostream>
#include <string>
#include "vacation.h"

using namespace std;

/*
* function_identifier: default constructor
* parameters: empty parameters
* return value: returns nothing */ 
Vacation::Vacation()
    
{
    destination = "Staying home";
    hotel = "Your house";
    people = 0;
    nights = 0;
    price = 0.00;
    x = 1;
    ID = count++;
    
}

/*
* function_identifier: takes in parameters for object Vacation
* parameters: string, string, int, int, double
* return value: declares taken parameters */ 
 Vacation::Vacation(string destin, string hName, int numPeople, int numNights, double aNight)
     
 {
     destination = destin;
     hotel = hName;
     people = numPeople;
     nights = numNights;
     price = aNight;
     x= 1;   
     ID = count++;
 }

/*
* function_identifier: gets destination
* parameters: object
* return value: destination listed in the object */ 
string Vacation::getDestination(){
    return destination;
}

/*
* function_identifier: gets hotel
* parameters: object
* return value: hotel string listed in the object */ 
string Vacation::getHotel(){
    return hotel;
}

/*
* function_identifier: gets number of people
* parameters: object
* return value: how many people listen within the object */ 
int Vacation::getPeople(){
    return people;
}

/*
* function_identifier:gets number of nights
* parameters: object
* return value: number of nights listed in the object */ 
int Vacation::getNights(){
    return nights;
}

/*
* function_identifier: gets the price per night
* parameters: object
* return value: price per night */ 
double Vacation::priceNight(){
    return price;
}

/*
* function_identifier: gets the Total
* parameters: object's price and nights
* return value: price * nights = total */ 
double Vacation::getTotal(){
    double total;
    total = price*nights;
    return total;
}

/*
* function_identifier: gets the cost per person
* parameters: object's price, nights, people
* return value: total / people */ 
double Vacation::costPer(){
    double total, result;
    total = price*nights;
    result = total/people;
    return result;
    
}

/*
* function_identifier: Gets the object's ID number
* parameters: Object
* return value: ID */ 
int Vacation::getID() {
    return ID;
}

