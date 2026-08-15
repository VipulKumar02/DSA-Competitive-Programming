#include<iostream>
using namespace std;

int main(){
    int n,i,fact=1;

    cout<<"enter n:";
    cin>>n;
    for(i=1; i<=n; i++){
        fact*=i; // fact=fact*i;  // This is also correct
        cout<<fact<<endl;
    }
}