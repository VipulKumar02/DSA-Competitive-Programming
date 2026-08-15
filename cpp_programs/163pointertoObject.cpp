//POINTER TO OBJECT AND HEAP

#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main() {
    rectangle r; // object created in stack
    rectangle *p; // pointer to object
   // p = new rectangle(); // object created in heap
    p=&r;        // p is pointing to r
   // rectangle *p = new rectangle(); // object created in heap
    p->length=10; // arrow operator is used to access members of object using pointer
    p->breadth=5;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;

}