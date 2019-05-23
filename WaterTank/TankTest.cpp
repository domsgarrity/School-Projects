#include <iostream>
#include "NotEnough.h"
#include "WaterTank.h"

void Display(WaterTank Tank);

using namespace std;

int main (){

    WaterTank tank1(45, 3, 4, 4);
    WaterTank tank2;
    
    Display (tank1);
    Display (tank2);
    
    if (tank1.operator==(tank2)){
        cout << "Tanks are equivalent" << endl;
    }
    else
        cout << "Tanks are inequivalent" << endl;
    return 0;
}


    
    void Display(WaterTank Tank){
    cout << "The tank's Max Volume is " << Tank.MaxVol() << " ." << "It's Water Level is " << Tank.WaterVol() << " " << endl;
}