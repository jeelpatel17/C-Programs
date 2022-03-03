#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    int someVar = 7;
};

class Derived : public Base
{
};

int main()
{
    Derived Jeel;
    cout << Jeel.someVar;
    return 1;
}