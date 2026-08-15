//global and local variables


#include<iostream>
using namespace std;
int g = 5; 
void fun() {
    int g =10;
    {
        //varibales in c++ are block scoped
        int g=0;
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;
}
int main() {
    fun();
     cout<<g<<endl;

}