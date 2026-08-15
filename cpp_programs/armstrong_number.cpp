#include<iostream>
using namespace std;

int main(){
    int n,r,m,sum=0;
    cout<<"Enter n:";
    cin>>n;
    m=n; // store original number

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r); // sum of cubes of digits = given number called armstrong number
    }
    if (m==sum){// check if original number is equal to sum of cubes of digits
        cout<<m<<" is an Armstrong number."<<endl;
    } else {
        cout<<m<<" is not an Armstrong number."<<endl;
    }
}