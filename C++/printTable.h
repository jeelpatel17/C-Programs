#include <iostream>
using namespace std;

int printTable(int num)
{
    int i = 1;
    do
    {
        cout << num << " X " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
}