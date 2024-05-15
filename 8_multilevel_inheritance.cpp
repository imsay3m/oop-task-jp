#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    void setTopSpeed(int speed)
    {
        topSpeed = speed;
        cout << "Top speed is set to " << topSpeed << endl;
    }

protected:
    int topSpeed;
};

class Car : public Vehicle
{
public:
    void openTrunk()
    {
        cout << "Trunk is now open." << endl;
    }
};

class Hybrid : public Car
{
public:
    void turnOnHybrid()
    {
        cout << "Hybrid mode is now switched on." << endl;
    }
};

int main()
{
    Hybrid car;
    car.setTopSpeed(220);
    car.openTrunk();
    car.turnOnHybrid();

    return 0;
}