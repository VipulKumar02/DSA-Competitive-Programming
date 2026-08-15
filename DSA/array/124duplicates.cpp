#include<iostream>
using namespace std;

void duplicates(int A[], int n){
    int lastduplicate=0;
    for(int i=0; i<n;i++){
        if(A[i]==A[i+1] && A[i]!=lastduplicate){
        cout<<A[i];
        lastduplicate=A[i];
        }
    }
}

int main(){
    int A[10]={3,6,8,8,10,12,15,15,15,16};
    int n = 10;
    duplicates(A,n);
}