#include<iostream>
using namespace std;

void insertionsort(int A[], int n){
    int x,i,j;

    for(i=1; i<n; i++){
        x=A[i];
        j=i-1;
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
void print(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i];
    }
}

int main(){
    int A[8]={2,4,1,3,5,9,7,8},n=8;
    insertionsort(A,n);
    print(A,n);
}