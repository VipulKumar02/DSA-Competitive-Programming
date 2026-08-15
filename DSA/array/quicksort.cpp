#include <iostream>
#include <climits>
using namespace std;

void Print(int A[], int n, const char* msg){
    cout << msg << " : ";
    for(int i = 0; i <= n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int partitionA(int A[], int low, int high){
    int pivot = A[low];
    int i = low;
    int j = high;

    do {
        do { i++; } while (A[i] <= pivot);  // stop when element > pivot
        do { j--; } while (A[j] > pivot);   // stop when element <= pivot

        if (i < j)
            swap(A[i], A[j]);

    } while (i < j);

    swap(A[low], A[j]);
    return j;
}

void QuickSortA(int A[], int low, int high){
    if (low < high){
        int j = partitionA(A, low, high);
        QuickSortA(A, low, j);   // left partition
        QuickSortA(A, j + 1, high);  // right partition
    }
}

int main() {
    cout << "Using INT_MAX as Infinity (Sentinel Element)" << endl;

    // Last element must be INT_MAX (sentinel)
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, INT_MAX};

    int n = (sizeof(A) / sizeof(A[0])) - 1; // ignoring last sentinel
    Print(A, n, "Original A");

    QuickSortA(A, 0, n);
    Print(A, n, "Sorted A");
}
