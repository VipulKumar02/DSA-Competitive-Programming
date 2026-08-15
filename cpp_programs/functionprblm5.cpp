// Write a program to find the maximum of 3 numbers using functions

#include<iostream>
using namespace std;

int maxm(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
int main() {
    int a,b,c;
    cout<<"Enter these 3 numbers = ";
    cin>>a>>b>>c;
    cout<<"MAximum of these 3 numbers is = "<<maxm(a,b,c);
    return 0;
}
