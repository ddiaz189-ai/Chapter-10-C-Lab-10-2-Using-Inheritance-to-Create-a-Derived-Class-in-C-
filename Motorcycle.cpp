// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 

// Write the Motorcycle class here
class Motorcycle: public Vehicle {
    public:
        void setSidecar(bool);
        bool getSidecar();

        void accelerate(double mph) override {
            double currentSpeed = getSpeed();
            double maxSpeed = getMaxSpeed();
            if(currentSpeed + mph < maxSpeed)
                setSpeed(currentSpeed + mph);
            else
                cout << "This motorcycle cannot go that fast." << endl; 
        }
    private:
        bool sidecar;
};

void Motorcycle:: setSidecar(bool scar){
    sidecar = scar;
}

bool Motorcycle:: getSidecar(){
    return sidecar;
}