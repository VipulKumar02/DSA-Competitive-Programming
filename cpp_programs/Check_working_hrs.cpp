#include <iostream>
using namespace std;
int main() {
    int hours;
    cout<<"enter working hours : "<<endl;
    cin>>hours;
    if(hours>=9 && hours<=12){
        cout<<"working hours are valid : "<<hours<<endl;
    }
    else {
        cout<<"working hours are invalid : "<<hours<<endl;
    }
}