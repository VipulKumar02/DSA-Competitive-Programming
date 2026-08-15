#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int a,b,c,d;
    cout<<"enter a, b, c, :"<<endl;
    cin>>a>>b>>c;

    d = (b*b)-(4*a*c);
    if(d == 0){
        int r1;
        cout<<"roots are real and equal"<<endl;
        r1=-b/2*a;
        cout<<r1<<endl;
        }
        else if(d>0){
            cout<<"roots are real and distinct"<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a)<<endl;
        }
        else{
            cout<<"roots are imaginary"<<endl;
        }
}