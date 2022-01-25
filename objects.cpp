#include <iostream>
using namespace std;

class Shape{
    int length;
    int breadth;

    public:
        void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2* (length + breadth);
        }
};


int main(){
    Shape rectangle;
    rectangle.setLength(10);
    rectangle.setBreadth(5);
    cout<< "The area of a rectangle is "<<rectangle.area()<<endl;
    cout<< "The perimeter of a rectangle is "<<rectangle.perimeter()<<endl;

    // pointer to object
    Shape *ptr;
    ptr = &rectangle;
    ptr-> setLength(100);
    cout<<rectangle.area()<<endl;

    // how to create an object in stack vs heap memory
    /* stack: */ Shape triangle;
    /* heap */ Shape *ptr1 = new Shape;

    // create an object in heap memory
    Shape *ptr2 = new Shape;
    ptr2 -> setLength(20);
    ptr2 -> setBreadth(10);
    cout<< ptr2 -> area()<<endl;

}