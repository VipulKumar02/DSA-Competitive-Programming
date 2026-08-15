#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){              
                cout<<char(65+i-1)<<" ";
        }
         cout<<endl;
    } 
}
//another way to print the pattern
/*
By using while loop
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
        char ch = 'A'+i-1; "here 'A' is the first character of the alphabet and i-1 is used to get the next character in the sequence"
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

*/
/*
Output:
A A A 
B B B
C C C
*/