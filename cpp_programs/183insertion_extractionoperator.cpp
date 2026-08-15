// Overload insertion and extraction operators for a custom class

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    // Default + parameterized constructor
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }

    // Declare friend functions so they can access private data
    friend istream& operator>>(istream& in, Complex& c);   // for input
    friend ostream& operator<<(ostream& out, const Complex& c); // for output
};

// Overload extraction operator >> (for input)
// Syntax: istream& operator>>(istream& in, ClassName& obj)
istream& operator>>(istream& in, Complex& c) {
    // Ask user to enter values
    cout << "Enter real part: ";
    in >> c.real; // store input in object

    cout << "Enter imaginary part: ";
    in >> c.img;

    return in; // return stream to allow chaining (cin >> c1 >> c2)
}

// Overload insertion operator << (for output)
// Syntax: ostream& operator<<(ostream& out, const ClassName& obj)
ostream& operator<<(ostream& out, const Complex& c) {
    // Print object in proper format
    out << c.real << " + " << c.img << "i";
    return out; // return stream to allow chaining (cout << c1 << c2)
}

int main() {
    Complex c1, c2;

    // Use overloaded >> to take input
    cin >> c1;
    cin >> c2;

    // Use overloaded << to display output
    cout << "First Complex: " << c1 << endl;
    cout << "Second Complex: " << c2 << endl;

    return 0;
}

