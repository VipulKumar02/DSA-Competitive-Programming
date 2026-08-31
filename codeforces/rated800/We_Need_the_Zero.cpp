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

        int answer = -1;

        for(int x = 0; x < 256; x++){
            vector<int> out;

            for(int j = 0; j < n; j++){
                out.push_back(arr[j] ^ x);
            }

            int z = 0;

            for(int k = 0; k < out.size(); k++){
                z = z ^ out[k];
            }

            if(z == 0){
                answer = x;
                break;
            }
        }

        cout << answer << endl;
    }
}