#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class SimpleCalc
{
    int a, b;

public:
    void takeInSimple()
    {
        cout << "Enter value of a:" << endl;
        cin >> a;
        cout << "Enter value of b:" << endl;
        cin >> b;
        putOutSimple();
    }
    void putOutSimple()
    {
        cout << a << " + " << b << " = " << a + b << endl;
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " * " << b << " = " << a * b << endl;
        cout << a << " / " << b << " = " << a / b << endl;
    }
};

class SciCalc
{
    int a, b;

public:
    void takeInSci()
    {
        cout << "Enter value of a:" << endl;
        cin >> a;
        cout << "Enter value of b:" << endl;
        cin >> b;
        putOutSci();
    }
    void putOutSci()
    {
        cout << "sin of a is " << sin(a) << endl;
        cout << "cos of a is " << cos(a) << endl;
        cout << "exp of a is " << exp(a) << endl;
        cout << "tan of a is " << tan(a) << endl;
    }
};

class HybridCalc : public SimpleCalc, public SciCalc
{
};

int main()
{
    HybridCalc inst;
    inst.takeInSimple();
    inst.takeInSci();
    return 1;
}