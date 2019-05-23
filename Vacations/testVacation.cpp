#include <iostream>
#include <string>
#include "planevacation.h"

using namespace std;

void pDisplay(PlaneVacation Plane);
void Display(Vacation Stay);

int Vacation::count = 1;


int main(int argc, char const *argv[]){
    cout << endl << "*****************************************************\n" << endl;
    

    Vacation vacation1;
        Display(vacation1);
    
    Vacation vegas("Las Vegas", "Mandalay Bay", 3, 6, 206.85);
        Display(vegas);
    
    PlaneVacation First("Delta", 144.55, "Las Vegas", "Aria", 4, 6, 423.15);
        pDisplay(First);
    
    cout << endl << "*****************************************************\n" << endl;
    
        return 0;
}


/*
* function_identifier: prints out necessary info of the object
* parameters: object
* return value: The printed information of the object */ 
void pDisplay(PlaneVacation Plane){
    cout << "Vacation " << Plane.getID() << ":" << endl;
    
    cout << "Vacation Type:       With Plane" << endl;
    cout << "Destination City:    " << Plane.getDestination() << endl;
    
    cout << "Hotel Name:          " << Plane.getHotel() << endl;
    
    cout << "Number of Nights:    " << Plane.getNights() << endl;
    
    cout << "Number of People:    " << Plane.getPeople() << endl;
    
    cout << "Price per Night:     " << Plane.priceNight() << endl;
    
    cout << "Airline:             " << Plane.airName() << endl;
    
    cout << "Airfare:             " << Plane.airCost() << endl << endl << endl;
    
    cout << "Cost of Vacation:    " << Plane.getTotal() << endl;
    
    cout << "Cost per Person:     " << Plane.costPer() << endl << endl << endl;
}

/*
* function_identifier: prints the object's information
* parameters: an object
* return value: prints the object's information' */ 
void Display(Vacation Stay){
    cout << "Vacation " << Stay.getID() << ":" << endl;
    
    cout << "Vacation Type:       No Travel" << endl;
    
    cout << "Destination City:    " << Stay.getDestination() << endl;
    
    cout << "Hotel Name:          " << Stay.getHotel() << endl;
    
    cout << "Number of Nights:    " << Stay.getNights() << endl;
    
    cout << "Number of People:    " << Stay.getPeople() << endl;
    
    cout << "Price per Night:     " << Stay.priceNight() << endl <<endl;
    
    cout << "Cost of Vacation:    " << Stay.getTotal() << endl;
    
    cout << "Cost per Person:     " << Stay.costPer() << endl << endl << endl;
}
