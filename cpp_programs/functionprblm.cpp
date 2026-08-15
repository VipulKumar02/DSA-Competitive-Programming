// sum of 1 to n numbers
#include<iostream>
using namespace std;

int sumof(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum=sum+i; //sum += i
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"sum of n = "<<sumof(n);
    return 0;
}