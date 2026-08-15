//nCr using Pascal's Triangle

#include<iostream>
using namespace std;

int c(int n, int r){
    if(n==r||r==0){
        return 1;
    }
    else{
        return c(n-1,r-1)+c(n-1,r);
    }
}
int main(){
    int x;
    x=c(4,2);
    cout<<x;
}