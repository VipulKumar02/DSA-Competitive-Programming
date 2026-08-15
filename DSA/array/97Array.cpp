#include <iostream>
using namespace std;

// A class that represents an Array ADT
class Array {
private:
    int A[10];   // Fixed-size array
    int size;    // Maximum size allowed
    int length;  // Current number of elements

public:
    // Constructor to initialize array
    Array() {
        size = 10;
        length = 0;
    }

    // Constructor with initial values
    Array(int arr[], int s, int l) {
        size = s;
        length = l;
        for (int i = 0; i < l; i++) {
            A[i] = arr[i];
        }
    }

    // Function to display elements
    void Display() {
        cout << "\nElements are:\n";
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Append at the end of array
    void Append(int x) {
        // Only allowed if space exists
        if (length < size) {
            A[length] = x;   // Add at last index
            length++;        // Increase length
        }
    }

    // Insert at any index
    void Insert(int index, int x) {
        // Valid index check
        if (index >= 0 && index <= length && length < size) {

            // Shift elements to the right
            for (int i = length; i > index; i--) {
                A[i] = A[i - 1];
            }

            A[index] = x;   // Insert new value
            length++;        // Increase length
        }
    }
    void Delete(int index){
        if(index >=0 && index<=length && length < size){
            for(int i = index; i<length -1; i++){
                A[i]=A[i+1];
            }
            length--;
        }
    }
};

int main() {
    int arr1[] = {2, 3, 4, 5, 6};

    // Create object with initial data
    Array obj(arr1, 10, 5);

    //obj.Append(10);   // Add 10 at end
    //obj.Insert(0, 12); // Insert 12 at index 0
    obj.Delete(3);
    obj.Display();

    return 0;
}
