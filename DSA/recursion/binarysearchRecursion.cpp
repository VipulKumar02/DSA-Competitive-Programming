#include<bits/stdc++.h>
using namespace std;
bool binarysearch(vector<int>&arr, int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }else if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }else{
        return binarysearch(arr,s,mid-1,k);
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    int k =7;


    if(binarysearch(arr,0,4,k)){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
}