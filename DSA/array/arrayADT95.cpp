#include <iostream>   // For input and output (cin, cout)
using namespace std;

// Class to represent a dynamic Array
class Array {
private:
    int* A;      // Pointer to dynamically allocated array in heap
    int size;    // Maximum size (capacity) of the array
    int length;  // Current number of elements in the array

public:
    // 🔹 Constructor — called when an Array object is created
    Array(int size) {
        this->size = size;       // Assign the given size to the class member
        A = new int[size];       // Dynamically allocate memory for the array
        length = 0;              // Initially, no elements are added
    }

    // 🔹 Function to create (input) array elements
    void create() {
        cout << "Enter number of elements: ";
        cin >> length;

        // Safety check: prevent entering more elements than the array size
        if (length > size) {
            cout << "Error: Number of elements exceeds array size!" << endl;
            length = size;  // Restrict to maximum capacity
        }

        cout << "Enter the array elements:" << endl;
        for (int i = 0; i < length; i++) {
            cout << "Array element [" << i << "]: ";
            cin >> A[i];   // Store input in array
        }
    }

    // 🔹 Function to display array elements
    void display() {
        cout << "Array elements are: ";
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";   // Print each element separated by space
        }
        cout << endl;
    }

    // 🔹 Destructor — called automatically when the object goes out of scope
    ~Array() {
        delete[] A;                // Free the dynamically allocated memory
        cout << "Array destroyed" << endl;
    }
};

// 🔹 Main function — program execution starts here
int main() {
    Array arr(10);     // Create an array of size 10 (capacity = 10)

    arr.create();      // Ask user for number of elements and inputs them
    arr.display();     // Display all entered elements

    // When program ends, destructor is automatically called
    return 0;
}
