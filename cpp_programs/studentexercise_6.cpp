#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the numbers of elements:";
    cin>>n;
    float num[1000], sum=0.0, avg;

    for(i=0; i<n; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i]; //use to take input of array elements
        sum += num[i];
    }
    avg = sum/n;
    cout<<"average = "<<avg<<endl;


}