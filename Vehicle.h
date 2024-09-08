#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle{
private:
    string brand;
    string model;
    int year;
    float price;
    int mileage;
public:
    Vehicle();
    Vehicle(string brand, string model, int year, float price, int mileage);

    void Display();

    string GetYearMakeModel();

    float GetPrice();
};

#endif //VEHICLE_H
