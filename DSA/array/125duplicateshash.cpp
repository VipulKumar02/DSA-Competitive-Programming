// Solved Using Hash Table

#include<iostream>
using namespace std;

void dupli(int A[], int l, int h, int n){
    int *B=new int [h]();
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    for(int i=0;i<=h;i++){
        if(B[i]>1){
            cout<<i<<B[i];
        }
    }
}

int main(){
    int A[10]={3,6,8,8,10,12,15,15,15,16};
    int l=3,h=16,n=10;
    dupli(A,l,h,n);
}