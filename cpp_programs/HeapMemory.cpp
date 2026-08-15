#include<iostream>
using namespace std;
int main(){
   /* int *p = new int; // Dynamically allocate memory for an integer
    *p = 10; // Assign value to the allocated memory
    cout << "Value pointed by p: " << *p << endl; // Output: 10
    delete p; // Free the allocated memory
    return 0;
}*/
    // This is syntax for Pointer to declaring, initializing and using a pointer in C++.
    // A pointer is a variable that stores the address of another variable.
    int *p = new int[5]; // Dynamically allocate memory for an array of 5 integers
    for (int i = 0; i < 5; i++) {
        p[i] = i * 10; // Assign values to the allocated memory
         cout<<p[i];
    }

int *q = new int[5]; // Dynamically allocate memory for another array of 5 integers
    for (int i = 0; i < 5; i++) {
        q[i] = p[i] + 1; // Assign values to the allocated memory
         cout<<q[i];
    }
    delete[] p; // Free the allocated memory for p
    delete[] q; // Free the allocated memory for q
    return 0;
   
}