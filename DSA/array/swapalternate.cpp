#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int start=0;
    int end=1;
    while(end<n){ // make sure we don’t go out of bounds if we use(start<end) go out of bound
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}
int printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    reverse(arr, 6);
    printarray(arr, 6);

}