#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>arr(n,0);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int mini = INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        mini = min(mini,abs(arr[i]));
    }
    cout<<mini<<endl;
}