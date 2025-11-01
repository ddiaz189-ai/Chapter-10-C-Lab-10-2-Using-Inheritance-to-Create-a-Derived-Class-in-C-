// This program uses the programmer-defined Motorcycle class. 
#include "Motorcycle.cpp"
#include <iostream>
using namespace std; 
int main()
{
   // Create Motorcyle objects here 
   Motorcycle motorcycleOne;
   Motorcycle motorcycleTwo;
   // Create a boolean variable for side car status   

   // Set side car status here
   motorcycleOne.setSidecar(true);
   motorcycleTwo.setSidecar(false);
   // Set maximum speed here
   motorcycleOne.setMaxSpeed(90);
   motorcycleTwo.setMaxSpeed(85);
   // Set current speed here
   motorcycleOne.setSpeed(65);
   motorcycleTwo.setSpeed(60);
   // Accelerate motorcyles here
   motorcycleOne.accelerate(30);
   motorcycleTwo.accelerate(20);
   // Display current speed here
   cout << "The current speed of motorcycleOne is " << motorcycleOne.getSpeed() << endl;
   cout << "The current speed of motorcycleTwo is " << motorcycleTwo.getSpeed() << endl;
   // Determine side car status and display results
   if (motorcycleOne.getSidecar()){
      cout << "This motorcycle has a side car" << endl;
   }
   else{
      cout << "This motorcycle does not have a side car" << endl;
   }
   if (motorcycleTwo.getSidecar()){
      cout << "This motorcycle has a side car" << endl;
   }
   else{
      cout << "This motorcycle does not have a side car" << endl;
   }
   return 0;
}