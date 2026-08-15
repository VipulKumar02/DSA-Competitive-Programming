//this is another way to swap 

#include<iostream>
using namespace std;
void swapalternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int main(){
    int even[6]={2,4,6,8,7,5};
    swapalternate(even, 6);
    printarray(even, 6);
}