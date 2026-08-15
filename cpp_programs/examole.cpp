#include<iostream>
using namespace std;
int main() {
    int r,n;
    cout<<"enter n";
    cin>>n;
    while(n>0){
        n=n/10;
        r=n%10;
        cout<<r;
    }
}