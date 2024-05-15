#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "This animal speaks ____." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog: Woof woof!" << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();
    return 0;
}