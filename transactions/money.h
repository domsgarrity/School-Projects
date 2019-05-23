/*
* class_identifier: used to define parameters of money
* constructors: Money(), Money(int, int)
* public functions: GetDollars, GetCents, Display
* private data members: dollars, cents
* static variables:
*/
class Money
{
    public:
        Money();
        Money(int, int);
        int GetDollars() const;
        int GetCents() const;
        float Display() const;
        
    private:
        int dollars;
        int cents;
};