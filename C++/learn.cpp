#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function which takes 2 point objects and computes the distance between those two points; define it outside the class and make it a friend function
// Formula for calculating distance
// √ (x2-x1)2 + (y2 - y1)2 <====> sqrt(exp2(x2-x1) + exp2(y2-y1));

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend float calcDistance(Point, Point);
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

float calcDistance(Point hey1, Point hey2)
{
    return sqrt(exp2(hey1.y - hey1.x) + exp2(hey2.y - hey2.x));
}

int main()
{
    Point instance1(0);
    Point instance2(1);
    cout << calcDistance(instance1, instance2);
    // instance.displayPoint();
    return 1;
}