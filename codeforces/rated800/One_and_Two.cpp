#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int fcount2 = 0;
    for(int i =0; i<n; i++){
        if(arr[i] == 2){
            fcount2++;
        }
    }
    int count2 = 0;
    int idx = -1;
    for(int i =0; i<n; i++){
        if(arr[i] == 2){
            count2++;
            fcount2--;
        }
        if(count2 == fcount2){
            idx = i;
            break;
        }
    }
    if(idx != -1){
        cout<<idx+1<<endl;
    }else{
        cout<<idx<<endl;
    }

}

return 0;

}
