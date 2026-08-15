// INSERT IN SORTED ARRAY
// CHECK ARRAY IS SORTED
// ARRANGING -VE ON LEFT SIDE AND +VE ON RIGHT SIDE

#include <iostream>
using namespace std;

// Insert x into sorted array A of current length 'n'
// 'size' is total capacity of the array
void insertsort(int A[], int &n, int size, int x) {
    if (n >= size) {
        cout << "No space to insert\n";
        return;
    }

    int i = n - 1;   // Start from last valid index

    // Shift elements greater than x one step to the right
    while (i >= 0 && A[i] > x) {
        A[i + 1] = A[i];
        i--;
    }

    // Place x at its correct position
    A[i + 1] = x;
    n++;  // Increase length
}

bool isSorted(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            return false;
        }
    }
    return true;
}

void rearrangeNegPos(int A[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        while (i < j && A[i] < 0) i++;
        while (i < j && A[j] >= 0) j--;
        if (i < j) {
            swap(A[i],A[j]);        
        }
    }
}

int main() {
    int arr[10] = {1,3,5,7,8,10,12,15};
    int size = 10;
    int length = 8;

    insertsort(arr, length, size, 6);

    // Display array
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
