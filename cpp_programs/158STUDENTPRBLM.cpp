// C++ program to demonstrate linear search using functions



#include<iostream>
using namespace std;

int search(int arr[],int n, int key) {
    for(int i=0 ; i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
    
}
int main() {
    int n,key;
    cout<<"Enter the size of array = ";
    cin>>n;
    
    int arr[n];
  
    cout << "Enter " << n << " elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      cout<<"Enter the key to be searched = ";
    cin>>key;
    int index =search(arr,n,key);
    cout << "Element found at index " << index << endl;

    
}