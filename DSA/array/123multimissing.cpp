// find Multiple missing in Unsorted Array

#include<iostream>
using namespace std;

void missing(int A[], int n){
    // Find low and high automatically
    int l = A[0];
    int h = A[0];

    for(int i = 1; i < n; i++){
        if(A[i] < l) l = A[i];
        if(A[i] > h) h = A[i];
    }
        int* B = new int[h+1](); // allocate h+1 elements // Note the () — it initializes all elements to 0
                               // Now B[0] to B[12] are all 0
        for(int i=0; i<n;i++){
            B[A[i]]++; //B[A[i]]=1;
        }  
        for(int i=l;i<=h;i++){
            if(B[i]==0){
                cout<<i;
            }
        }                 
}

int main(){
    int A[10]={3,7,4,9,12,6,1,11,2,10};
    int n=10;
    missing(A,n);

}