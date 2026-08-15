#include<iostream>
using namespace std;

int main(){
    int n=234;
    int c=0;
    int d=1;
    while(n>0){
        int y=n%10;
        n=n/10;
        c=c+y;
        d=d*y;
    }
    int z = d-c;
    cout<<z;
}