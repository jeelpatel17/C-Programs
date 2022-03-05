#include <iostream>
#include <string>
using namespace std;

/* *** Initialization list in constructors *** */
class some
{
    int a, b;

public:
    // This is a syntax through which a and b can be given values via constructor
    some(int c, int d) : a(c), b(d)
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    some thing(1, 2);
    return 1;
}