#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int>& arr, bool ans, int idx){
    if(idx == arr.size()){
        return ans;
    }

    if(arr[idx-1] > arr[idx]){
        ans = false;
        return ans;
    }

    return issorted(arr, ans, idx + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Handle empty array or single element
    if(n <= 1){
        cout << true;
        return 0;
    }

    bool ans = true;
    int idx = 1;

    ans = issorted(arr, ans, idx);

    cout << ans;

    return 0;
}