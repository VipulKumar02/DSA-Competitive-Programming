#include<iostream>
using namespace std;
#include<cmath> // for pow function

int main(){
    int n,r,rev=0,m;
    cout << "Enter a number: ";
    cin >> n;
    m=n; // store original number
    while(n>0){
        r=n%10; // last digit
        n=n/10; // remove last digit
        rev=rev*10+r; // reverse the number
    }
    cout << "Reversed number: " << rev << endl; // print reversed number
}