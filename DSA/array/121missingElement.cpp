#include<iostream>
using namespace std;

int missing(int A[],int l, int h, int n){
    int diff=l-0;
    for(int i=0;i<n;i++){
        if(A[i]-i != diff){
            return diff+i;
            break;
        }       
    }
}
int main(){
    int A[11]={6,7,8,9,11,12,15,16,17,18,19};
    int l=6,h=19,n=11;
    cout<<missing(A,l,h,n);
}