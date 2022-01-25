#include <iostream>
using namespace std;

class Car{
//this is generalization 
public:
    // pure virtual functions meant to be overriden
    virtual void Start() = 0;
    virtual void Stop() = 0;
};

class Prius : public Car{
public:
    void Start(){cout<< "Prius Started..." <<endl;}
    void Stop(){cout<< "Prius Stopped..." <<endl;}
};

class Insight : public Car{
public:
    void Start(){cout<< "Insight Started..." <<endl;}
    void Stop(){cout<< "Insight Stopped..." <<endl;}
};

int main(){
    //create a pointer to subclass object to call different subclasses
    Car *ptr = new Prius();
    ptr -> Start();
    ptr -> Stop();
    //reassignment of pointer address
    ptr = new Insight();
    ptr -> Start();
    ptr -> Stop();

    // array implementation
    Car *prius = new Prius();
    Car *insight = new Insight();
    Car *cars[2] = {prius, insight};
    for (int i = 0; i<2; i++){
        cars[i] -> Start();
        cars[i] -> Stop();
    }

    return 0;
}