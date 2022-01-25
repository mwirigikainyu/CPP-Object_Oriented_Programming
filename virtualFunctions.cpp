#include <iostream>
using namespace std;

class Car{
public:
    //virtual allows for function overriding
    virtual void Start(){cout << "Starting Car..." <<endl;}
};

class Hybrid : public Car{
public:
    void Start(){cout << "Hybrid Starting..." <<endl;}
};

int main(){
    //base class pointer on derived class object
    Car *ptr = new Hybrid();
    // can also be:
    // Hybrid prius;
    // Car *ptr = &prius;

    ptr -> Start();
    //scope resolution allows us to call superclass
    ptr -> Car::Start();

    return 0;
}