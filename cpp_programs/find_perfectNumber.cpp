//perfrct number means sum of factors of that number is equal to double of that no.
#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            sum+=i; // sum=sum+i;  // This is also correct
           
        }
       

    }
  
    cout<<sum<<endl;
    if(2*n==sum){ // 2*n==sum is used to check whether the number is perfect or not
        cout<<"Perfect number"<<endl;
    }
        else{
            cout<<"Not a perfect number"<<endl;
        }
}