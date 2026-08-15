#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
                cout<<char('A'+i-1)<<" "; //Focus pn what is changing or not changing in this case i is changing and j is not changing that's why we are using i-1
                
        }
         cout<<endl;
    } 
}
/*
Output:
A 
B B
C C C
*/