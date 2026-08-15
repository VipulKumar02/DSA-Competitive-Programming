#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter n:";
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
       // cout<<"factor of :"<<n<<"is"<<i<<endl; 
       sum+=i; // sum=sum+i;  // This is also correct //this is used to find the sum of factors of n
}
}
  cout<<sum<<endl;
    }
