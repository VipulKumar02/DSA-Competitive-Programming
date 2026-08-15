#include<iostream>
using namespace std;

void minmax(int A[],int low, int high, int &min, int &max){
    if(low == high){
        if(A[low]<min){
            min=A[low];
        }
        if(A[low]>max){
            max=A[low];
        }
        return;
        
    }
    int mid= (low+high)/2;

    minmax(A,low,mid,min,max);
    minmax(A,mid+1,high,min,max);
}

int main(){
    int A[]={2,4,3,6,1,8,5};
    int n=7;

    int min=A[0];
    int max=A[0];

    minmax(A,0,n-1,min,max);
    cout<<min;
    cout<<max;
}