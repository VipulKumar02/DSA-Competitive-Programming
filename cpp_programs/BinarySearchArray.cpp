#include<iostream>
using namespace std;

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10},key,mid;
    int l=0,h=9;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]=key){
            cout<<"Element found at index: "<<mid<<endl;
            return 0;
        }
        else if(A[mid]<key){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
}