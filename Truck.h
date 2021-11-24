#ifndef Truck_H
#define Truck_H
#include"Automobile.h"
#include <string>
using namespace std;
class Truck : public Automobile
{
    private:
    
   string driveType;
    public:
    Truck() : Automobile()
    {
        driveType = " ";
        
    }
    Truck( string truckMake, int truckModel , int truckMileage , double truckPrice , string truckDriveType):
    
    Automobile(truckMake, truckModel , truckMileage , truckPrice)
    {
        driveType = truckDriveType;
    }
    string getDriveType()
    {
        return driveType;
    }
        
    };
    #endif
