#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
    void sum(double a, double b)
    {
        cout << " The sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

class Mul
{
public:
    void mul(double a, double b)
    {
        cout << " The Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
};

class Sub
{
public:
    void sub(double a, double b)
    {
        cout << " The Subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
};

class Div
{
public:
    void div(double a, double b)
    {
        cout << " The Division of " << a << " and " << b << " is " << a / b << endl;
    }
};

class Calculate : public Add, public Div, public Sub, public Mul
{
public:
    int p = 12;
    int q = 5;
    void complete()
    {
        cout << "The Calculation is Completed" << endl;
    }
};

int main()
{
    Calculate problem;
    problem.sum(2, 2);
    problem.mul(2, 2);
    problem.div(2, 2);
    problem.sub(2, 2);
}