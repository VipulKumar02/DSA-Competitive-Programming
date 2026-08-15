#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter 2 no. :";
    cin>>n>>m;

    while(m!=n){
        if(m>n){
            m=m-n; // subtract smaller number from larger number
        } else if (n>m){
            n=n-m; // subtract smaller number from larger number
        }
    }
    cout<<"GCD is : "<<m<<endl; // GCD is the common value of n and m when they are equal

}