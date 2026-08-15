#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;

    if(age>=18 && age<=30){
        cout<<"young: "<<age<<endl;
    }
    else if(age<18 && age !=0){
        cout<<"child: "<<age<<endl;
    }
    else{
        cout<<"old: "<<age<<endl;
    }
}