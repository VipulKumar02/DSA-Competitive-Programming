#include <iostream>
using namespace std;

// Define a class to represent an Array
class Array {
private:
    int A[10];     // Fixed-size array (capacity = 10)
    int size;      // Maximum number of elements allowed
    int length;    // Current number of elements in the array

public:
    // Constructor to initialize array
    Array(int s = 10) {
        size = s;
        length = 0;
    }

    // Function to create an array with given elements
    void create(int arr[], int n) {
        if (n <= size) {
            for (int i = 0; i < n; i++)
                A[i] = arr[i];
            length = n;
        } else {
            cout << "Size exceeded!" << endl;
        }
    }

    // Function to display array elements
    void display() {
        cout << "\nElements are:" << endl;
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }

    // Function to delete element at a given index
    int Delete(int index) {
        int x = 0;

        // Check for valid index
        if (index >= 0 && index < length) {
            x = A[index];  // Store deleted element
            for (int i = index; i < length - 1; i++)
                A[i] = A[i + 1];  // Shift elements left
            length--;              // Decrease length
            return x;              // Return deleted element
        }
        return 0; // Invalid index
    }
};

// Main function
int main() {
    Array arr1(10);                    // Create an array object of size 10
    int initial[] = {2, 3, 4, 5, 6};   // Initial elements
    arr1.create(initial, 5);           // Fill the array

    cout << "Deleted element: " << arr1.Delete(0) << endl;  // Delete element at index 0
    arr1.display();                   // Display updated array

    return 0;
}
