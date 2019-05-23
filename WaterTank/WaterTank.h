

using namespace std;

/*
* class_identifier: Creates object WaterTank to find volume of tank and water in tank.
* constructors: WaterTank(), WaterTank(double w, double l, double h, double lvl);
* public functions: double MaxVol() const; double WaterVol() const; void AddWater (double water) const; void DrawWater(double water) const; bool ==(); bool >(); bool <(); bool +();
* private data members: width, length, height, level
* static variables: n/a
*/
class WaterTank{
    public:
        WaterTank();
        WaterTank(double w, double l, double h, double lvl);
        double MaxVol() const;
        double WaterVol() const;
        void AddWater (double water);
        void DrawWater(double water);
        bool operator==(WaterTank &tank2) const;
        bool operator>(WaterTank &tank2) const;
        bool operator<(WaterTank &tank2) const;
        bool operator+(WaterTank &tank2) const;
    private:
        double width;
        double length;
        double height;
        double level;
    
};