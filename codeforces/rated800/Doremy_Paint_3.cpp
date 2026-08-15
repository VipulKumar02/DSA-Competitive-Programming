#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }

        // Missing case
        if(mp.size() == 1){
            cout << "YES\n";
            continue;
        }

        if(mp.size() > 2){
            cout << "NO\n";
            continue;
        }

        int cnt1 = 0, cnt2 = 0;
        int i = 0;

        for(auto x : mp){
            if(i == 0){
                cnt1 = x.second;
                i++;
            }
            else{
                cnt2 = x.second;
            }
        }

        if(n % 2 == 0){
            if(cnt1 == cnt2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            if(abs(cnt1 - cnt2) == 1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}