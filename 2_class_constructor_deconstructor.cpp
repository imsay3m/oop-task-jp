#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x;
    A()
    {
        printf("Constructor Called\n");
        x = 10;
    }
    ~A()
    {
        x = 0;
        cout << "\nDestructor Called\n"
             << x;
    }
};

int main()
{
    A myObj;
    cout << myObj.x << endl;

    return 0;
}