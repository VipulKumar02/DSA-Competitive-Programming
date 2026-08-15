#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                cout<<char('A'+i+j-2)<<" "; 
        }
         cout<<endl;
    } 
}
/*Concept of this code is to print the pattern :
formula for this pattern is i+j-1
1 2 3 
2 3 4
3 4 5
i+j-1 after taking i=1 and j=1
    i+j-1=1
so, we added ('A' -1) on both sides
    i+j-1+('A' -1)=1+('A' -1)
slove this equation:
    i+j+'A'-2 = 'A'
    hence we get the formula for print 'A'

*/

/*
Output:
A B C 
B C D
C D E
*/