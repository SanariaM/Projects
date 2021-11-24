#ifndef AUTOMOBLE_H
#define AUTOMOBLE_H
# include <string>
using namespace std;

class Automobile
{
    private:
    string make;
    int model;
    int mileage;
    double price;
    public:
    Automobile()
    {
        make = " ";
        model = 0;
        mileage = 0;
        price = 0.0;
        
    }
    Automobile(string autoMake, int autoModel,
    int autoMileage,double autoPrice)
    {
     make = autoMake;
    model = autoModel;
    mileage = autoMileage;
    price = autoPrice;
}
string getMake() const 
{
    return make;
}
int getModel() const 
{
    return model;
}
int getMileage() const 
{
    return mileage;
}
double getPrice() const 
{
    return price;
}
};
#endif

