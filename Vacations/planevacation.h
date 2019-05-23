#include <string>
#include "vacation.h"

using namespace std;

/*
* class_identifier: Derivation of vacations, specific to traveling by plane.
* constructors: PlaneVacation(), PlaneVacation("Delta", 144.55, "Las Vegas", "Aria", 4, 6, 423.15)
* public functions: airName, airCost, airTotal, airPer, currentID
* private data members: airline, airfare, air
* static variables: ID */
class PlaneVacation : public Vacation
{
    public:
        PlaneVacation();
        PlaneVacation(string plane, double tix, string destin, string hName, int numPeople, int numNights, double aNight);
        string airName();
        double airCost();
        double airTotal();
        double airPer();
        //static int ID;
        int getID();
    
    private:
        string airline;
        double airfare;
        Vacation air;
        int y;
        //Vacation yes;
};