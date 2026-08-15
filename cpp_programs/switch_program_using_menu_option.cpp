#include<iostream>
using namespace std;

int main() {
    cout<<"Choose an Option"<<endl;
    cout<<"1. Add\n"<<"2. subtract\n"<<"3. multiply\n"<<"4. divide\n"<<endl;
    int a,b,c,option;
    cout<<"Enter choice :"<<endl;
    cin>>option;  
    cout<<"Enter two number :"<<endl;
    
    cin>>a>>b;
    
    switch(option)
    {
        case 1: cout<<"sum is :"<<" ";
        c=a+b;
        break;
        case 2: cout<<"difference is :"<<" ";
        c=a-b;
        break;
        case 3: cout<<"product is :"<<" ";
        c=a*b;
        break;
        case 4: cout<<"division is :"<<" ";
        c=a/b;
        break;
        default: cout<<"invalid option"<<endl;
    }
    cout<<c<<endl;
}