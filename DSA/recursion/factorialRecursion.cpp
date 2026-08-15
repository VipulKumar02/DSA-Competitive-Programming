#include<iostream>
using namespace std;

int  fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int Ifact(int n){ //using loop
    int f=1;
    int i;
    for(int i=1; i<=n; i++){
        f=f*i; //f=f+i
    }
     return f;
    
}
int main(){
    int x;
    x=Ifact(5);
    cout<<x<<endl;
}