#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int value;
    A(int value)
    {
        this->value = value;
    }

    // Method to display the value
    void display()
    {
        cout << this->value << endl;
    }
};

int main()
{
    A myObj(10);
    myObj.display();
    myObj.value = 15;
    myObj.display();
    return 0;
}