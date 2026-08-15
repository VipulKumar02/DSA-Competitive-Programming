#include <iostream>
using namespace std;

// Define a class for Array
class Array {
private:
    int A[10];     // Fixed-size array (capacity = 10)
    int size;      // Maximum possible size
    int length;    // Current number of elements

public:
    // Constructor to initialize array
    Array(int s = 10) {
        size = s;
        length = 0;
    }

    // Function to create an array with initial elements
    void create(int arr[], int n) {
        if (n <= size) {
            for (int i = 0; i < n; i++)
                A[i] = arr[i];
            length = n;
        } else {
            cout << "Size exceeded!" << endl;
        }
    }

    // Function to display all elements
    void display() {
        cout << "\nElements are:" << endl;
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }

    // Function to append (add at the end)
    void append(int x) {
        if (length < size)
            A[length++] = x;   // Add element and then increment length
        else
            cout << "Array is full!" << endl;
    }

    // Function to insert element at a specific index
    void insert(int index, int x) {
        if (index >= 0 && index <= length && length < size) {
            // Shift elements to the right
            for (int i = length; i > index; i--)
                A[i] = A[i - 1];
            A[index] = x;
            length++;
        } else {
            cout << "Invalid index or array full!" << endl;
        }
    }
};

// Main function
int main() {
    Array arr1(10);                      // Create array with size 10
    int initial[] = {2, 3, 4, 5, 6};     // Initial values
    arr1.create(initial, 5);             // Fill with initial elements

    arr1.append(10);                     // Add 10 at the end
    arr1.insert(0, 12);                  // Insert 12 at index 0
    arr1.display();                      // Display all elements

    return 0;
}
