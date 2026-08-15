#include<iostream>
using namespace std;

int main(){
    int A[10],key;
    cout<<"Enter 10 elements of array: ";
    for(int i=0; i<10; i++){
        cin>>A[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    for(int i=0; i<10; i++){
        if (A[i]==key){
            cout<<"Element found at index: "<<i<<endl;
            return 0;
        }
        
    }
    cout<<"Element not found at index: "<<endl;

}