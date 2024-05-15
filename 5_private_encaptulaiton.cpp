#include <bits/stdc++.h>
using namespace std;

class Person
{
    // by default, all class members are private.
    // private:
    string name;

public:
    string getName()
    {
        return name;
    }

    void setName(string newName)
    {
        name = newName;
    }
};

int main()
{
    Person myObj;
    myObj.setName("Karim");
    cout << myObj.getName() << endl;
    return 0;
}