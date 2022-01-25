#include <iostream>
using namespace std;

class Rational{
private:
    int numerator;
    int denominator;
public:
    Rational(){}
    Rational(int a, int b){
        numerator = a;
        denominator = b;
    }

    // addition operator overloading (member function)
    Rational operator+ (Rational num){
        Rational temp;
        temp.numerator = numerator + num.numerator;
        temp.denominator = denominator + num.denominator;
        return temp;
    }

    //friendly insertion operation overloading 
    friend ostream & operator<<(ostream &os, Rational &num);
};

// (global insertion overloaded function)
ostream & operator<<(ostream &os, Rational &num){
    os << num.numerator <<" / " <<num.denominator;
    return os;
}

int main(){
    Rational p(22,45),q(7,34),j;
    j = p + q;
    cout<< j <<endl;

    return 0;
}