#include <iostream>
using namespace std;

// Merge two sorted arrays A and B into C
void mergeArrays(int A[], int m, int B[], int n, int C[]) {
    int i = 0;  // index for A
    int j = 0;  // index for B
    int k = 0;  // index for C

    // Compare and pick smaller element
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A (if any)
    while (i < m) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B (if any)
    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 4, 7, 10};
    int B[] = {2, 3, 9};
    int m = 4;  // size of A
    int n = 3;  // size of B

    int C[m + n];  // merged array

    mergeArrays(A, m, B, n, C);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
