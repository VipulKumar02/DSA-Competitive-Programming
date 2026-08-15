#include<iostream>
using namespace std;

double e(int x, int n){
    double s=1;
    while(n>0){   // we can use for loop {for(; n>0; n--)}
        s=1+x*s/n;
        n--;
    }
    return s;
}
int main(){
    cout<<e(1,10);
}