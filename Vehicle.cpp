#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

Vehicle::Vehicle(){
    this-> brand= "COP3503";
    this-> model= "Rust Bucket";
    this-> year= 1900;
    this-> price= 0;
    this-> mileage= 0;
};

Vehicle::Vehicle(string brand, string model, int year, float price, int mileage){
    this-> brand= brand;
    this-> model= model;
    this-> year= year;
    this-> price= price;
    this-> mileage= mileage;
  };

string Vehicle::GetYearMakeModel(){
    string yearMakeModel= to_string(year)+" "+ brand+ " "+model;
    return yearMakeModel;
;
};

float Vehicle::GetPrice(){
    return price;
};

void Vehicle::Display(){
    cout<< year<<" "<<brand<< " "<<model<<" "<<"$"<<price<<endl;
};