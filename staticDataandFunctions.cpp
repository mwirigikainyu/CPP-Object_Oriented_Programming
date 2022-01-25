#include <iostream>
using namespace std;

class Test{
public:
    int a;
    static int count;
    Test(){
        a = 10;
        count++;
    }
    static int getCount(){
        return count;
    }
};

int Test::count = 0;

int main(){
    Test t1;
    cout<< t1.count <<endl;
    Test t2;
    cout<< t2.count << endl;
    Test t3;
    cout<< t1.getCount() <<endl;
    Test t4;
    cout<< Test::getCount();
}