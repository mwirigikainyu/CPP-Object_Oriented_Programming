#include <iostream>
using namespace std;

class Name{
private:
    int a;
protected:
    int b;
public:
    int c;
    // when you declare a global function as a friend,
    // it can access all data members of a class
    friend void fun();
};

void fun(){
    Name Mitch;
    Mitch.a = 10;
    Mitch.b = 15;
    Mitch.c = 20;
}

int main(){
    fun();
    return 0;
}