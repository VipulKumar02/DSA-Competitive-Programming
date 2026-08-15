#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
/*for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){

                if(i>=j){
                cout<<i+j<<" ";
               
            }
            
            else{
                cout<<" ";
            }
        }
         cout<<endl;
    } 
}*/
// another way to print the pattern
for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
                cout<<i+j-1<<" ";
        }
         cout<<endl;
    } 
}
/*Output:
1 
2 3
3 4 5
4 5 6 7
*/