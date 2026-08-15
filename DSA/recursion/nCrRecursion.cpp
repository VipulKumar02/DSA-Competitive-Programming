#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return fact(n-1)*n;
    }
}
int nCr(int n, int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    
    return num/den;
    
}
int main(){
    int x =nCr(5,1);
    cout<<x;
}