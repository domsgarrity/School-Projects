#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "CreditCard.h"

using namespace std;

string ztype(CreditCard Card);
void Account(CreditCard Cards);
int CreditCard::ID = 1;
//CreditCard::CurrentId {currentID = ID++;}
int main(){
    
CreditCard Card1;
CreditCard Card2(1234567890123456, MASTERCARD, 110, 45);
CreditCard Card3(2376490076112678, DISCOVER, 45, 45);

Money charge1(5,20);
Money charge2(45,45);
    
Account(Card1);
Account(Card2);
    Card2.chargeMoney(charge1);
Account(Card2);
    
Account(Card3);
    Card3.makePayment(charge2);





return 0;

}

string ztype(CreditCard Card)
    {
    switch (Card.getCardType())
     {
        case AMEX : return "AMEX";
        case DISCOVER : return "DISCOVER";
        case MASTERCARD : return "MASTERCARD";
        case VISA : return "VISA";
     }
    }

void Account(CreditCard Cards)
{
    cout << "Credit Card " << Cards.currentID << endl
         << "Card number is " << internal << fixed << setw(16) << setfill('0') << Cards.getCardNumber() << endl 
         << "Card Type is "  << ztype(Cards) << endl 
         << "Balance is $" << Cards.GetDollars() << "." << internal << fixed << setw(2) << setfill('0') << Cards.GetCents() << endl << endl;
}
