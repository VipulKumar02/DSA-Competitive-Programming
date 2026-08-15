#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;

    for(i=1; i<=n; i++){
        sum+=i;
        // sum=sum+i;  // This is also correct
        cout<<sum<<endl;
    }
}