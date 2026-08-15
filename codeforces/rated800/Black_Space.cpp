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

        vector<int>arr(n);
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        int count =0;
        
        for(int i =0; i<n; i++){
            int zero =0;
            if(arr[i]==0){
                int j =i;
                while(j<n && arr[j]==0){
                    zero++;
                    j++;
                }
                count = max(zero,count);
                i = j - 1;
            }
        }
        cout<<count<<endl;
    }
}