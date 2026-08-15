#include <iostream>
using namespace std;

// Display the array
void display(int arr[], int length) {
    cout << "Elements are: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Reverse using extra array (like your first Reverse)
void reverse1(int arr[], int length) {
    // Create a temporary array of same size
    int *B = new int[length];

    int i, j;
    // Copy elements from arr into B in reverse order
    // arr[length-1] -> B[0], arr[length-2] -> B[1], ...
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = arr[i];
    }

    // Copy back from B to arr
    for (i = 0; i < length; i++) {
        arr[i] = B[i];
    }

    // Free the memory
    delete[] B;
}

// Reverse in-place using swapping (like your Reverse2)
void reverse2(int arr[], int length) {
    int i = 0;
    int j = length - 1;

    // Swap from both ends and move towards center
    while (i < j) {
        // swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main() {
    // Normal simple array
    int arr[] = {2, 3, 9, 16, 18, 21, 28, 32, 35};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    display(arr, length);

    reverse1(arr, length);
    cout << "After reverse1 (using extra array): ";
    display(arr, length);

    reverse2(arr, length);
    cout << "After reverse2 (in-place swap, so original again): ";
    display(arr, length);

    return 0;
}
