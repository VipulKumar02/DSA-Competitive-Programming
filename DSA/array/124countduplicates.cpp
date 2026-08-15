#include<iostream>
using namespace std;

void countdupli(int A[], int n){
    for(int i=0; i<n-1; i++){
        if(A[i]==A[i+1]){
            int j=i+1;
            while(A[j]==A[i]) j++;
            cout<<A[i]<<" is appearing "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
}

int main(){
    int A[11]={3,6,8,8,10,12,15,15,15,16,16};
    int n=11;
    countdupli(A,n);
}