#include <iostream>
#include<iomanip>
#include "Car.h"
#include "Truck.h"
#include "SUV.h"
using namespace std;
int main()
{
Car car("BMW" , 2021 , 20 , 50000 , 4);
Truck truck ("Toyota", 2019, 1000, 150000, " 4WD ");
SUV suv("cadillac", 2016, 500, 40000, 5);
cout << fixed<< showpoint <<setprecision(2);
cout << "We have the folling car in inventory:\n"
     << car.getModel() << " "<< car.getMake()
     << " with "<< car.getDoor() <<" doors and "
     << car.getMileage() <<" miles.\nPrice: $"
     << car.getPrice() << endl << endl;
     
cout<<"We have the following truck in inventory:\n"
     << truck.getModel() << " "<< truck.getMake()
     << " with "<< truck.getDriveType()
     <<"drive type and "<< truck.getMileage() 
     <<" miles.\nPrice: $"<< truck.getPrice() 
     << endl << endl;
     
cout<<"We have the following SUV in inventory:\n"
     << suv.getModel() << " "<< suv.getMake()
     << " with " << truck.getMileage() <<" miles and "
     << suv.getPassengers() <<" passengers capacity.\n"
     <<" Price: $"<< suv.getPrice() <<endl;
return 0;
}