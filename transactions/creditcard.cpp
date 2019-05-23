/*
 * Name: Dominic Garrity, CS202, Assignment 2
 * Description: Design, implement,	and	test a class that represents a credit card account.
 * Input:  
 * Output: 
 */
#include <iostream>
#include "CardType.h"
#include "CreditCard.h"
//#include "money.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

/*
* function_identifier: default constructor
* parameters: n/a
* return value: Does not return. number = 0(16x), Amex, 0 dollars, 0 cents
*/ 
CreditCard::CreditCard()
    : currentID(ID++)
{
    long n = 0000000000000000;
    stringstream convert;
    convert << n;
    number  = convert.str();
    Type = AMEX;
    //currentID(ID ++);
}

/*
* function_identifier: creates new credit card object
* parameters: Card Number, Card Type, Dollar, and Cents
* return value: n/a
*/ 
CreditCard::CreditCard(long NewNum, CardType NewType, int NewDollar, int NewCents)
    : Money (NewDollar, NewCents) , currentID(ID++)
{
    
    ostringstream hello;
        
    Balance = Money(NewDollar, NewCents);
        
    hello << NewNum;
    number = hello.str();
        
    Type = NewType;
    //CurrentID(ID++);
    
}

/*
* function_identifier: returns the Card Type
* parameters: enum of CardType
* return value: returns char string Type 
*/ 
CardType CreditCard::getCardType() const
{
    return Type;
}

/*
* function_identifier: gets the Card's number
* parameters: int number
* return value: int number
*/ 
string CreditCard::getCardNumber()
{
    return number;
}


Money CreditCard::getBalance() 
{
   //cout << GetDollars() << "." << GetCents();
  //  float balance;
  //  balance = Balance.Display();
  return Balance;
    
}


/*
* function_identifier: displays the current balance as a float
* parameters: balance
* return value: balance
*/ 

float CreditCard::getBal() const
{
    float balance;
    float dol;
    float cen;
        dol = Balance.GetDollars();
        cen = Balance.GetCents();
        balance = dol + (cen/100);
            return balance;
}

/*
* function_identifier: Will reduce Balance by value taken
* parameters: Money object to be paid, and Balance
* return value: Balance - NewBalance Object
*/ 
void CreditCard::makePayment(Money newBalance) 

{   
   
    int amtD, amtC;
    amtD = Balance.GetDollars() - (newBalance.GetDollars());
    amtC = Balance.GetCents() - (newBalance.GetCents());
    
    Money total(amtD, amtC);
    Balance = total;
    
     cout << "Amount to be paid is $" << newBalance.GetDollars() << "." << newBalance.GetCents() << endl;
    cout << "The new balance is $" << amtD << "." << internal << fixed << setw(2) << setfill('0') << amtC << endl << endl;
    
    
    
/* Money result;
   //newMoney = Balance.getbalance();
    // awesome(amtD, amtC) = Balance;
    int paymentD, payD, amtD, b;
    int paymentC, payC, amtC;
   // dollars.Balance = newMoney.GetDollars();
    paymentC = newMoney.GetCents();
   // paymentC = newMoney.GetCents();
    payD = Balance.GetDollars();
    payC = Balance.GetCents();
    amtD = paymentD + payD;
    amtC = paymentC + payC;
    
    
   // dollars.Balance + paymentD;
   //Balance += paymentC;
    return Balance;
*/
    
}

/*
* function_identifier: Will increase Balance by value taken
* parameters: Money object to be paid, and Balance
* return value: Balance + NewMoney Object
*/ 
void CreditCard::chargeMoney(Money newMoney)
{
    int amtD, amtC;
    amtD = Balance.GetDollars() + (newMoney.GetDollars());
    amtC = Balance.GetCents() + (newMoney.GetCents());
    
    Money result(amtD, amtC);
    Balance = result;
    
    cout << "Amount to be charged is $" << newMoney.GetDollars() << "." << newMoney.GetCents() << endl;
    cout << "The new balance is $" << amtD << "." << internal << fixed << setw(2) << setfill('0') << amtC << endl << endl;
     
}

/* int main ()
{
    
    CreditCard yes(1234567891234567, AMEX, 9, 50);
    CreditCard Si;
     cout << yes.getBal() << endl;
    Money cool(5, 45);
    yes.chargeMoney(cool);
   
    cout << Si.getCardNumber() << endl;
    return 0;
}
*/