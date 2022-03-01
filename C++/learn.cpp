#include <iostream>
#include <string>
using namespace std;

union software
{
    int id;
    string name;
    float pricePerMonth;
};

int main()
{
    union software s1;
    s1.name = "adobeAe";
}