#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
                cout<<char('A'+i+j-2)<<" "; 
        }
         cout<<endl;
    } 
}
/*
Output:
A 
B C 
C D E 
D E F G 
*/