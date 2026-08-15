#include<iostream>
using namespace std;

int main(){
    // Using for each loop to find the sum of an array
    int A[]={1,2,3,4,5};
    int sum=0;
    for(auto X:A){
        sum+=X;
    }
    cout<<sum;
    return 0;
}
/* Using traditional for loop
for(int i=0; i<5; i++){
  sum=sum+A[i];
}
  cout<<sum<<endl;
  */