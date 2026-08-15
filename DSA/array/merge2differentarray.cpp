#include <iostream>
using namespace std;

void merge(int A[], int B[], int C[], int m, int n){
    int i = 0, j = 0, k = 0;

    // Merge until one array gets exhausted
    while(i < m && j < n){
        if(A[i] < B[j]){
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A (if any)
    while(i < m){
        C[k++] = A[i++];
    }

    // Copy remaining elements of B (if any)
    while(j < n){
        C[k++] = B[j++];
    }
}

void print(int C[], int size){
    for(int i = 0; i < size; i++){
        cout << C[i] << " ";
    }
    cout << endl;
}

int main(){
    int A[] = {2, 4, 6, 8, 9};
    int B[] = {1, 3, 5, 7};

    int m = 5;
    int n = 4;
    int C[m + n]; // merged array

    merge(A, B, C, m, n);
    print(C, m + n);

    return 0;
}
