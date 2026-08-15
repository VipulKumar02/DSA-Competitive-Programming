#include<iostream>
using namespace std;
int main(){
    /*int count=1;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
*/
// this is the same code as above but using while loop
int i=1,count=1;
while(i<=3){
    int j=1;
    while(j<=3){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}

}