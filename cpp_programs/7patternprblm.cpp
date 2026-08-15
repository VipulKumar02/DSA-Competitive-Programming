#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;

   /*for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
                cout<<count<<" ";
                count++;
        }
        cout<<endl;
    }
}
*/

// this is the same code as above but using while loop

   /* int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/

for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

                if(i>=j){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" ";
            }
        }
         cout<<endl;
    } 
}
/*Output: 
1    
2 3
4 5 6
7 8 9 10
*/