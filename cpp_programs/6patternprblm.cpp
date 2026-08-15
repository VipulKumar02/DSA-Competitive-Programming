#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
// this is the same code as above but using while loop
/*
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}
}
*/
// Output: 
/*
1
22
333
4444
*/