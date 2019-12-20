#include<iostream>
#include<vector>
using namespace std;

class CarbonFootprint {
    public :
    virtual int getCarbonFootprint() {}
};

class Building : public CarbonFootprint {
    int heatfactor;
    public :
        void getHeatFactor(int hf) {
            heatfactor = hf;
        }
        int getCarbonFootprint() {
            return heatfactor * 1.4;
        }
};

class Car : public CarbonFootprint {
      int fuel;
    public :
        void getFuel(int f) {
            fuel = f;
        }
        int getCarbonFootprint() {
            return fuel * 1.4;
        }
};

class Bicycle : public CarbonFootprint {
      int fuel;
    public :
        void getFuel(int f) {
            fuel = f;
        }
        int getCarbonFootprint() {
            return fuel * 1.4;
        }
};

int main() {
    vector<CarbonFootprint *> ref;
    Building obj1;
    obj1.getHeatFactor(10);
    Car obj2;
    obj2.getFuel(5);
    Bicycle obj3;
    obj3.getFuel(2);
    ref.push_back(&obj1);
    ref.push_back(&obj2);
    ref.push_back(&obj3);
    //CarbonFootprint *i;
    for(int i = 0; i != ref.size(); i++) {
        cout << ref[i]->getCarbonFootprint() << endl;
    }
}