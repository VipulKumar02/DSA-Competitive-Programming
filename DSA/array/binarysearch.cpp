#include<iostream>
using namespace std;

int binarysearch(int array[],int size, int key){
    int l,h;
    l=0;
    h=size-1;
    
    while(l<=h){
        int mid=(l+h)/2;   
        if(key==array[mid])return mid;
        else if(key<array[mid]){
            h=mid-1;
        }
        else
        l=mid+1;
    }
    return -1;
}

int main(){
    int array[7]={1,2,3,4,5,6,7};
    int key,size;
    cout<<"enter key: ";
    cin>>key;
    int result = binarysearch(array, 7, key);
    if(result!=-1){
        cout<<"Key Found at: "<<result<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}