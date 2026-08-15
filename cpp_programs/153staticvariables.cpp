#include<iostream>
using namespace std;

void fun() {
    static int x=10; // static variable
    // static variable is initialized only once
    //retains its value between function calls
    x++;
    cout<<x<<endl;
}
int main() {
    fun();
    fun();
    fun();
    fun();
    fun();
}