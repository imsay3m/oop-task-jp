#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void myMethod(string fname)
    {
        cout << fname << " Is A good Student" << endl;
    }
};

int main()
{
    A myObject;
    myObject.myMethod("Karim");
    myObject.myMethod("Rahim");
    myObject.myMethod("Abul");
    return 0;
}