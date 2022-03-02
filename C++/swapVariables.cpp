#include <iostream>
using namespace std;

int main()
{
    float a = 23.45, b = 29.77;
    cout << "a: " << a << ", b: " << b << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "a: " << a << ", b: " << b;
    return 1;
}