// Data hiding in c++

#include<iostream>
using namespace std;

class rectangle{
private:  // private members are accessible only within the class
    int length;
    int breadth;
    public:
    void setlength(int l){ // setter function
        if(l>0){
            length=l;
        }
        else{
            cout<<"lenth cant be negative"<<endl;
            length=0;
        }
    }

    void setbreadth(int b){  //setter function created as a simple function we create by using set
        if(b>0){
            breadth=b;
        }
        else{
            cout<<"breadth cant be negative"<<endl;
            breadth=0;
        }
        }
        int getlength(){ // getter function
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<"length is = "<<r.getlength()<<endl;
    cout<<"breadth is = "<<r.getbreadth()<<endl;
    cout<<"area is = "<<r.area()<<endl;
}