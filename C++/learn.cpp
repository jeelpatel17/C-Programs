#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    // These can only be accessed by functions inside this scope
    int srNo, initialPrice;
    string ownerName;

public:
    // These can be accessed by outer functions
    string model, brand;
    void buyCar(string model, string brand)
    {
        this->model = model;
        this->brand = brand;
    }
    void setOwner(string name); // this is just declaration, we can define it later
    void info()
    {
        cout << "This is " << this->model << " from " << this->brand << ", and it is owned by " << this->ownerName << "." << endl;
    }
};

// This is how we can define an inner function of a class outside the class
void Car ::setOwner(string name)
{
    this->ownerName = name;
}

main()
{
    Car chevy;
    // This both below lines will not work as the variable 'ownerName' is not even read only, no one can either read or write it except its own parent class!
    chevy.ownerName = "Paresh";
    cout << chevy.ownerName;
    return 1;
}