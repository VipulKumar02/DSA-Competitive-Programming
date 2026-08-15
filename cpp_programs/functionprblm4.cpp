// Write a function to find he POWER m^n (m raised to the power n) 

#include<iostream>
using namespace std;

int pow(int m, int n){
int p=1;
for(int i=1; i<=n; i++){
    p=p*m; //p *= m
}
return p;
}
int main(){
    int m,n;
    cout<<"Enter m, n = ";
    cin>>m>>n;
    cout<<"m^n = "<<pow(m,n);
}