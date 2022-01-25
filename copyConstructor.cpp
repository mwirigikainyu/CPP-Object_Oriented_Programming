#include <iostream>
using namespace std;

class Test{
    int *ptr;
    public:
        Test(int x){
            ptr = new int(x);
        }
        Test(const Test &t){  // user defined copy constructor
            int val = *(t.ptr);
            ptr = new int(val);
        }
        void set(int x){
            *ptr = x;
        }
        void print(){cout << *ptr <<endl;}
};

int main(){
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
}