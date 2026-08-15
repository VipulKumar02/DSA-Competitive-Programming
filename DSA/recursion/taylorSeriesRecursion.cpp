#include<iostream>
using namespace std;

double e(int x, int n){
    static double p=1;
    static double f=1;
    double s;
    
    if(n==0){
        return 1;
    }
    else{
        s= e(x,n-1);
        p=p*x;
        f=f*n;
        return s+p/f;
       
    }
}
int main(){
    cout<<e(1,10);
}