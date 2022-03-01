#include <iostream>
#include <string>
using namespace std;

int main()
{
    // DATATYPES IN C++
    string name = "harry";
    // int -> short (for short integers)
    int a = 2;
    int b = 3;
    short aVarWithShortMemoryAllocated;
    float aFloatWhichIsConstant = 45.32;
    // for declaring constant variables
    float const aFloatWhichIsConstant = 45.32;
    // float -> double (for long floats)
    double score2 = 45.322;

    // for longer integers
    long aVarWithLongMemoryAllocated;
    long long aVarWithVeryLongMemoryAllocated;
    long double score3 = 45.332;
    cout << "Enter your name:" << endl;

    // Capturing input and storing into a variable
    cin >> name;

    // Displaying a variable value; similarly for executing functions too instead of variables
    cout << "Hello " << name << " It's great to meet you!";

    // New line character in C++
    // endl

    // Typecasting
    cout << "a / b is " << (float)a / b << endl;
}