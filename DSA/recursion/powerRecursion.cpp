#include<iostream>
using namespace std;


int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}

//Optimal Solution
//2nd way to solve in this we reduce the multiplication because in thise power became samll by checking even odd
int pow1(int m, int n){
    if(n==0){
        return 1;
    }
    else if (n%2==0){        // checking even or odd power
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,n/2);
    }
}
int main(){
    int z=pow(2,9);
    cout<<z;

}