#include<bits/stdc++.h>
using namespace std;

int search(const vector<int>& arr, int target, int i){

    if(i == arr.size()){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }

    return search(arr, target, i + 1);
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

    int target;
    cin >> target;

    int idx = search(arr, target, 0);

    cout << idx;
}