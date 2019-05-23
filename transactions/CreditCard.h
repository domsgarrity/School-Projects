#include "CardType.h"
#include "money.h"
#include <string>

/*
* class_identifier: Derived class of Money, gives operations of Credit Card.
* constructors: Cardnumber(), 
* public functions: a list of public function identifiers
* private data members: Number, Type, Balance
* static variables: a list of any static variables 
*/
using namespace std;

class CreditCard : public Money
{
    public:
        CreditCard();
        CreditCard(long NewNum, CardType NewType, int NewDollar, int NewCents);
        CardType getCardType() const;
       string getCardNumber();
        //int getCardtype() const;
        float getBal() const;
        Money getBalance();
        void makePayment(Money newBalance);
        void chargeMoney(Money newMoney);
        //friend Money operator+(Money newMoney);
        static int ID;
        const int currentID;
        
       
            
    private:
        string number;
        CardType Type;
        Money Balance;
       
        
        
        
        
    
};