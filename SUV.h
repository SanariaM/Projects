#ifndef SUV_H
#define SUV_H
#include "Automobile.h"
#include <string>

class SUV : public Automobile
{
    private:
   int passengers;
    public:
    SUV() : Automobile()
    {
        passengers = 0;
        
    }
    SUV( string suvMake, int suvModel , int suvMileage , double suvPrice , int suvPassengers):
    
    Automobile(suvMake, suvModel , suvMileage , suvPrice)
    {
        passengers = suvPassengers;
    }
    int getPassengers()
    {
        return passengers;
    }  
    };
    #endif
