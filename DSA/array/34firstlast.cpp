#include<iostream>
#include<vector>
using namespace std;

vector<int> findIndex(vector<int>& arr, int tar) {
    int n = arr.size();
    int first = -1, last = -1;

    // First occurrence
    for(int i = 0; i < n; i++){
        if(arr[i] == tar){
            first = i;
            break;
        }
    }

    // Last occurrence
    for(int j = n - 1; j >= 0; j--){
        if(arr[j] == tar){
            last = j;
            break;
        }
    }

    return {first, last};
}

int main(){
    vector<int> arr = {5,7,7,8,8,8,10};
    int tar = 8;

    vector<int> ans = findIndex(arr, tar);
    cout << ans[0] << " " << ans[1];
}
