#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int diff = INT_MAX;
        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
            diff = min(diff, arr[i] - arr[i - 1]);
        }

        if (!sorted) {
            cout << 0 << endl;
            continue;
        }

        int op = diff / 2 + 1;

        cout << op << endl;
    }
}