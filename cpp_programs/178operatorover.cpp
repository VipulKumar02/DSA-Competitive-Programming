// add two complex no. using operator overlpading

#include<iostream>
using namespace std;

class complex {
private:
int real;
int img;
public:
complex(int r=0,int i=0){
    real=r;
    img=i;
}
//complex add(complex x){
    complex operator+(complex x){  // operator overloading
    complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;
    return temp;
}
void display() {  // to display complex no.  and use it in main functio to access private data members
    cout << real << " + i" << img << endl;
}
};
int main() {
    complex c1(10, 5), c2(2, 4), c3;
    c3 = c1+c2; // c3=c1.add(c2);
    // cout << c3.real << " + i" << c3.img;
    c3.display();
    return 0;
}