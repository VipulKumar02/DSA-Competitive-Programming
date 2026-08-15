#include<iostream>
using namespace std;

void fun(int n) {
    if (n>0){
        cout<<n<<endl;
        fun(n-1); // recursive function
        cout<<n<<endl;
    }

}
int main() {
    int x;
    cout<<"Enter a number = ";
    cin>>x;
    fun(x);
}