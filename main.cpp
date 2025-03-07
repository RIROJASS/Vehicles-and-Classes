#include <iostream>
#include <vector>
#include "Vehicle.h"
using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input == 1)
    {
        Vehicle defaultVehicle;
        defaultVehicle.Display();
    }
    else if (input == 2)
    {
        Vehicle customVehicle1("Tesla", "Model S", 2019, 46122, 42);
        customVehicle1.Display();
        Vehicle customVehicle2("Chrysler", "New Yorker", 1984, 2000, 100423);
        customVehicle2.Display();

    }
    else if (input == 3)
    {
        Vehicle customVehicle1("Chrysler", "New Yorker", 1984, 2000, 100423);
        Vehicle customVehicle2("COP3503", "Moped", 2019, 2200, 45);
        cout << "Price of the vehicles: $" << customVehicle1.GetPrice() + customVehicle2.GetPrice() << endl;

    }
    else if (input == 4)
    {
        Vehicle customVehicle1("Razor", "Scooter", 2019, 39, 950);
        cout << customVehicle1.GetYearMakeModel();
    }
    else if (input == 5)
    {
        Vehicle muscleCar("Ford", "Mustang", 1968, 82550, 71000);
        Vehicle electric("Toyota", "Prius", 2014, 27377, 12);
        Vehicle suv("Mazda", "CX5", 2018, 28449, 11047);

        vector<Vehicle> vehicles;

        vehicles.push_back(muscleCar);
        vehicles.push_back(electric);
        vehicles.push_back(suv);

        for (int i=0; i < vehicles.size(); i++)
        {
            vehicles[i].Display();
        }
    }

    return 0;
}