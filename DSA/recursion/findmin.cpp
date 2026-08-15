#include<bits/stdc++.h>
using namespace std;

int findmin(const vector<int>&arr, int mini, int idx){
    if(idx==arr.size()){
        return mini;
    }

    if(arr[idx]<mini){
        mini= arr[idx];
    }
    return findmin(arr,mini,idx+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int idx=0;
    int mini = INT_MAX;
    mini = findmin(arr,mini,idx);
    cout<<mini;
}