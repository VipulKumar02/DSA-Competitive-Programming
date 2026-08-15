#include<iostream>
using namespace std;
int main(){
   /* for (int i=1; i<=4; i++){
        for (int j=1; j<=4; j++){
            cout<<j<<" ";
        }
      cout<<endl;
    }    
}*/
//this is the same code as above but using while loop
int i=1;
while(i<=4){
int j=1;
while(j<=4){
cout<<j<<" ";
j++;
}
cout<<endl;
i++;
}

}