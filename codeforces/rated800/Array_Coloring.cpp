#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }

        int odd =0;
        for(int i =0; i<n; i++){
            if(arr[i]%2!=0){
                odd++;
            }
        }
        if(odd%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}