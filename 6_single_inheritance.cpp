#include <bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    double width, height;

public:
    void setWidth(double w)
    {
        width = w;
    }
    void setHeight(double h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    double getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;

    rect.setWidth(4.5);
    rect.setHeight(2);
    cout << "Total area: " << rect.getArea() << endl;

    return 0;
}