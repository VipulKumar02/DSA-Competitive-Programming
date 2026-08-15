#include<iostream>
using namespace std;
void bubblesort(int A[], int n){
    for(int i=0; i<n-1; i++){   // there is n-1 passes and n-1 comparision
        for(int j=0; j<n-1-i; j++){ // why -i because in every comparision/pass one element is sorted
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }
}
void print(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i];
    }
}
int main(){
    int A[8]={2,4,1,3,5,9,7,8},n=8;
    bubblesort(A,n);
    print(A,n);

}