#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        vector<int>arr(x,0);
        for(int i =0; i<x; i++){
            cin>>arr[i];
        }
        bool s = false;
        for(int i =0; i<x; i++){
            if(k==arr[i]){
                cout<<"YES"<<endl;
                s= true;
                break;
            }
        }
        if(!s){
            cout<<"NO"<<endl;
        }
    }
}