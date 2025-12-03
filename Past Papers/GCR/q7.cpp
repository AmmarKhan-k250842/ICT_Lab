/*
- You are designing a system for vehicles. Create a base class Vehicle with variables brand
and speed, and a function showInfo() to display them.

Create a derived class Car that adds a variable fuelType and a function showCarInfo() to
display all details.
Task: Create a Car object, set all values, and call both functions.
*/


#include <iostream>
using namespace std;

class vehicle
{
    protected:
    string brand;
    int speed;

    public:
    vehicle(string b, int s)
    {
        brand = b;
        speed = s;
    }
    vehicle() = default;

    void showinfo()
    {
        cout << "Vehicle Brand: " << brand << endl;
        cout << "Vehicle Speed: " << speed << endl;
    }
};

class car : public vehicle
{
    protected:
    string fuelType;

    public:
    car(string brand, int speed, string f) : vehicle(brand, speed)
    {
        fuelType = f;
    }
    car() = default;

    void showCarInfo()
    {
        cout << "Vehicle Brand: " << brand << endl;
        cout << "Vehicle Speed: " << speed << endl;
        cout << "Vehicle Fuel Type: " << fuelType << endl;
    }
};

int main()
{
    vehicle v("Honda", 200);
    car c("Honda", 200, "Petrol");

    v.showinfo();
    c.showCarInfo();

    return 0;
}