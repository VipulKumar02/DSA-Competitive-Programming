#include<iostream>
using namespace std;

int main(){
    int n,i,count=0;  // here, we used count so if count is more than 2 it means not a prime no.
    cout<<"enter n:";
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
        count++;   
        }
    }
        if(count==2){  // count of what ? count of factors of that no.
            cout<<"Prime number"<<endl;}
            else{
                cout<<"Not a prime number"<<endl;
            }
        }

