#include <iostream>
#include "money.h"
using namespace std;

/*
* function_identifier: gets dollars and cent values for money
* parameters: takes two ints and assigns them d and c respectively
* return value: n/a
*/ 
Money::Money(int d, int c)
{
    dollars = d;
    cents = c;
}

/*
* function_identifier: default constructor
* parameters: nothing
* return value: n/a
*/ 
Money::Money()
{
    dollars = 0;
    cents = 0;
}

/*
* function_identifier: gets dollars
* parameters: dollars
* return value: dollar integer
*/ 
int Money::GetDollars() const
{
    return dollars;
}

/*
* function_identifier:Gets cents
* parameters:cents
* return value: cents integer 
*/ 
int Money::GetCents() const
{
    return cents;
}

/*
* function_identifier: displays amount as a float
* parameters: dollars, cents
* return value: float version of dollars and cents
*/ 
float Money::Display() const
{
    float doll = dollars;
    float cen = cents;
    float amount;
    
    amount = (cen/100) + doll;
    //cout << amount <<endl;
}

