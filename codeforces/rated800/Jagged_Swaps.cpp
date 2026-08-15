#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>ans=arr;
        sort(ans.begin(), ans.end());

        int maxi = *max_element(arr.begin(),arr.end());

        if(maxi == n){
        bool changed = true;

while(changed){
    changed = false;

    for(int i = 1; i < n-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            changed = true;
        }
    }
}
    }else{
        cout<<"NO";
    }
        if(arr==ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}