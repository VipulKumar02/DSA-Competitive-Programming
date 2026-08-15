#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
/*    
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<=n-1) //formula is used to print the pattern i+j<=n-1
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}*/

//Another way to print the pattern by using while loop:
int i=1;
int j=1;
while(i<=n)
{
//first we print star:

    int star = n-i+1;
    while(star>0)
    {
        cout<<"*";
        star--;
    }
    cout<<endl;
    i++;
}
}
/*
Output: 
* * * * 
* * *
* *
*
*/