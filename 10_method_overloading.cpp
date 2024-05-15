#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }

    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }

    void print(string s)
    {
        cout << "Printing string: " << s << endl;
    }
};

int main()
{
    A obj;
    obj.print(5);
    obj.print(500.263);
    obj.print("Hello");

    return 0;
}