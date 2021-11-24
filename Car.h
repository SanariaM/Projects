#ifndef CAR_H
#define CAR_H
#include "Automobile.h"
#include <string>


class Car : public Automobile
{
    private:
    
    int door;
    public:
    Car() : Automobile()
    {
        door = 0;
        
    }
    Car( string carMake, int carModel , int carMileage , double carPrice , int carDoor):
    
    Automobile(carMake, carModel , carMileage , carPrice)
    {
        door = carDoor;
    }
    int getDoor()
    {
        return door;
    }   
    };
    #endif
