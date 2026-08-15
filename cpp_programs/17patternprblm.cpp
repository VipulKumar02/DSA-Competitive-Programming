#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1) //formula is used to print the pattern i+j>=n-1
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
/*
Another way to print the pattern by using while loop:
int i=1;
int j=1;
while(i<=n)
{
first we print space:

    int space = n-i;
    while(space)
    {
        cout<<" ";
        space--;
    }
then we print star:

        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
            cout<<endl;
            i++;
}


*/






/*
Output:
     * 
    * *
  * * *
* * * *
*/
