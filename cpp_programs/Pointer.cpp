//This is syntax for Pointer to declaring, initializing and using a pointer in C++.
// A pointer is a variable that stores the address of another variable.
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a; // Pointer p points to the address of variable "a" /HERE POINTER IS DECLARED AND INITIALIZED

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: Address of a
    cout << "Value of p: " << p << endl; // Output: Address of a
    cout << "Address of p: " << &p << endl; // Output: Address of p
    cout << "Value pointed by p: " << *p << endl; // Output: 10

    *p = 20; // Changing the value at the address pointed by p

    cout << "New value of a: " << a << endl; // Output: 20
    return 0;
}