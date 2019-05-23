#include <string>

using namespace std;

/*
* class_identifier: Base class for Vacations
* constructors: Vacation vacay, Vacation vacay("Las Vegas", "Mandalay Bay", 3, 6, 206.85)
* public functions: getDestination, getHotel, getPeople, getNights, priceNight, getPrice, getTotal, costPer
* private data members: destination, hotel, people, nights, price, currentID
* static variables: count
*/

class Vacation
{
    public:
        Vacation();
        Vacation(string destin, string hName, int numPeople, int numNights, double aNight);
        string getDestination();
        string getHotel();
        int getPeople();
        int getNights();
        double priceNight();
        double getPrice();
        double getTotal();
        double costPer();
        
        int getID();
        static int count;
    private:
        string destination;
        string hotel;
        int people;
        int nights;
        double price; 
        int x, ID;
        //static int ID;
};