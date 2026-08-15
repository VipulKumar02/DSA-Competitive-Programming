#include<iostream>
using namespace std;

int main(){

    int r,n;
    cout<<"Enter n:";
    cin>>n;

    while(n>0){
        r=n%10; // last digit
        n=n/10; // remove last digit
        cout<<r<<endl; // print last digit
    }
}