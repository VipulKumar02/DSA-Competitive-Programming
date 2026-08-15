#include<iostream>
using namespace std;

int main(){
    int A[12]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int Pcount=0,Ncount=0;

    for(int i=0; i<12; i++ ){
        if(A[i]>0){
            Pcount++;
        }
    }
    cout<<"Postive number count:"<<Pcount<<endl;
    for(int i=0; i<12; i++ ){
        if(A[i]<0){
    
            Ncount++;
        }
    }
    cout<<"Negative number count: "<< Ncount <<endl;
}


/*
#include<iostream>
using namespace std;

int main()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13}; // when size is not known
    int pcount=0;
    int ncount=0;
    
    for(int x:A) // we used for each loop to iterate through the array
    {
        if(x<0)
            ncount++;
        else
            pcount++;
    }
    
    cout<<pcount<<" "<<ncount;
}
*/
