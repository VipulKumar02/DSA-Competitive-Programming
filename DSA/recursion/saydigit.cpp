#include<iostream>
using namespace std;

void saydigit(int n, string arr[]){
    //base codition
    if(n==0){
        return ;
    }
    //process
    int digit=n%10;
    n=n/10;

    //recursive function
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    saydigit(n,arr); // here, i forget how to print function by calling function.

}