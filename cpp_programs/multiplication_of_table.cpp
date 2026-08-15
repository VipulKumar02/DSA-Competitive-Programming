#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter n:";
    cin>>n;

    for(i=1; i<=n; i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}