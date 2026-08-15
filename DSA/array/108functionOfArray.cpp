#include <iostream>   // For input/output using cout, endl, etc.
using namespace std;  // So we don't have to write std:: before cout, endl, etc.

// A class that represents an Array ADT (Abstract Data Type)
class Array {
public:
    int A[10];   // Fixed-size array of integers (can store up to 10 elements)
    int size;    // Maximum capacity of the array (here it will be 10)
    int length;  // Current number of elements actually used in A

    // Function to display all elements of the array
    void Display() {
        cout << "\nElements are" << endl;
        // Loop from index 0 to length-1 (only valid elements)
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";   // Print each element
        cout << endl;              // New line after printing all elements
    }

    // Function to get element at a given index
    int Get(int index) {
        // Check if index is valid
        if (index >= 0 && index < length)
            return A[index];   // Return element at that index
        return -1;             // Return -1 if index is invalid
    }

    // Function to set (update) value at a given index
    void Set(int index, int x) {
        // Check if index is valid
        if (index >= 0 && index < length)
            A[index] = x;      // Update the element at index with x
    }

    // Function to find maximum element in the array
    int Max() {
        int max = A[0];        // Assume first element is maximum initially
        // Loop through remaining elements
        for (int i = 1; i < length; i++) {
            if (A[i] > max)    // If current element is greater than max
                max = A[i];    // Update max
        }
        return max;            // Return maximum value
    }

    // Function to find minimum element in the array
    int Min() {
        int min = A[0];        // Assume first element is minimum initially
        // Loop through remaining elements
        for (int i = 1; i < length; i++) {
            if (A[i] < min)    // If current element is smaller than min
                min = A[i];    // Update min
        }
        return min;            // Return minimum value
    }

    // Function to calculate sum of all elements
    int Sum() {
        int s = 0;             // Variable to store sum
        // Add all elements from index 0 to length-1
        for (int i = 0; i < length; i++)
            s += A[i];
        return s;              // Return final sum
    }

    // Function to calculate average of all elements
    float Avg() {
        // Typecast Sum() to float to get decimal result
        // Divide by length (number of elements)
        return (float)Sum() / length;
    }
};

int main() {
    // Create an object arr1 of type Array and initialize it
    // A = {2,3,9,16,18,21,28,32,35,0}
    // size = 10
    // length = 9 (only first 9 elements are valid)
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // Call Sum() on arr1 and print the result
    cout << arr1.Sum() << endl;

    // Display all elements stored in arr1
    arr1.Display();

    return 0;   // Indicate successful end of program
}
