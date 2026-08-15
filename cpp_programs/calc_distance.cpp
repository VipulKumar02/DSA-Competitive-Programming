#include <iostream>
using namespace std;
#include<cmath>

int main() {
    float a,v,u,s;
    cout<<"enter a,v,u: "<<endl;
    cin>>a>>v>>u;
    s= float ((v*v)-(u*u))/(2*a);
    cout<<"distance : "<<s<<endl;
}