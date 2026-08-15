#include<iostream>
#include<cmath>
using namespace std;
int main(){
float  x1, y1, x2, y2;
float dist;
    cout<<"x1,y1,x2,y2: "<<endl;
    cin>>x1>>y1>>x2>>y2;
  
    
    dist= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));//write expression here
    cout<<"distance : "<<dist<<endl;
    
}
