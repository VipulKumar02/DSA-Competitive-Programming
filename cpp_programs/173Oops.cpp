// C++ program to demonstrate the use of class and object
//Using Scope Resolution Operator(::) to define member functions outside the class


#include<iostream>
using namespace std;

class Rectangle {
    private :
    
    int length;
    int breadth;
    
    public :
    
    Rectangle(int l, int b); // default constructor

    void setLength(int l);// setter function
    void setBreadth(int b); //setter function
    

    int getLength() { return length; }; // getter function
    int getBreadth() { return breadth; }; // getter function
    
    int area(); // function to calculate area
    int perimeter(); // function to calculate perimeter

    ~Rectangle(); // destructor

};
Rectangle::Rectangle(int l, int b) { // default constructor
    setLength(l);
    setBreadth(b);
}
void Rectangle::setLength(int l) { // setter function
    if (l > 0) {
        length = l;
    } else {
        cout << "Length can't be negative" << endl;
        length = 0;
    }
}
void Rectangle::setBreadth(int b) { //setter function
    if (b > 0) {
        breadth = b;
    } else {
        cout << "Breadth can't be negative" << endl;
        breadth = 0;
    }
}
int Rectangle::area() { // function to calculate area
    return length * breadth;
}
int Rectangle::perimeter() { // function to calculate perimeter
    return 2 * (length + breadth);
}
Rectangle::~Rectangle() { // destructor
    cout << "Destructor called" << endl;
}

int main() {
    Rectangle r(10, 5); // object creation
    cout << "Length is = " << r.getLength() << endl;
    cout << "Breadth is = " << r.getBreadth() << endl;
    cout << "Area is = " << r.area() << endl;
    cout << "Perimeter is = " << r.perimeter() << endl;
}