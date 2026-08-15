#include<iostream>
using namespace std;

int main() {
    int price;
    cout<<"enter your final price: "<<endl;
    cin>>price;

    if(price >= 1999 && price<=2999) {
        cout<<"you are eligible for discount: "<<price<<endl;
    }
    else if(price < 1999 && price != 0){
        cout<<"you are not eligible for discount: "<<price<<endl;
    }
    else{
        cout<<"invalid price: "<<price<<endl;
    }
}