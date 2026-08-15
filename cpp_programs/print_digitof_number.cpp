#include<iostream>
using namespace std;

int main(){
    int r,n,rev=0,m;
    cout<<"Enter n:";
    cin>>n;
    
    while(n>0){
        r=n%10; // last digit
        n=n/10; // remove last digit
        rev=rev*10+r; // reverse the number
    }
    cout << "Reversed number: " << rev << endl; // print reversed number
    while(rev>0){
        r=rev%10; // last digit of reversed number // We used r one more time and we assign r with new valuse so previous value of r is erased
        rev=rev/10; // remove last digit of reversed number
        cout<<r<<"="; // print last digit of reversed number
        switch(r){
            case 0: cout<<"Zero"<<endl; break;
            case 1: cout<<"One"<<endl; break;
            case 2: cout<<"Two"<<endl; break;
            case 3: cout<<"Three"<<endl; break;
            case 4: cout<<"Four"<<endl; break;
            case 5: cout<<"Five"<<endl; break;
            case 6: cout<<"Six"<<endl; break;
            case 7: cout<<"Seven"<<endl; break;
            case 8: cout<<"Eight"<<endl; break;
            case 9: cout<<"Nine"<<endl; break;
        }
            
    }
        

}
