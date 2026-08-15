//insertion operator overloading using friend function

#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r=0, int i=0){
        real=r;
        img=i;
    }
    //insertion operator overloading
    friend ostream & operator<<(ostream & out /* out is name of ostream (refernce) & */ , Complex c); //function prototype
};
ostream & operator<<(ostream & out , Complex c){
    out<<c.real<<"+i"<<c.img;
    return out; //returning the ostream object
}
int main(){
    Complex c1(10,5), c2(2,4);
    cout<<"c1 = "<<c1<<endl; //cout.operator<<(c1);
    cout<<"c2 = "<<c2<<endl; //cout.operator<<(c2);
    operator<<(cout,c1); //this also works but not recommended //cout.operator<<(c1);
    return 0;
    
}