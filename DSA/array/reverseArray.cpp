#include<iostream>
using namespace std;

int printarray1(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
//here, we used while loop
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    printarray1(arr,6);
    reverse(arr, 6);
    printarray(arr, 6);
    
}