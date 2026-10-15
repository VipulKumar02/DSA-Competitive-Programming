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

        bool good = false;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(arr[i], arr[j]) <= 2) {
                    good = true;
                    break;
                }
            }
            if (good) break;
        }

        cout << (good ? "Yes" : "No") << endl;
    }

    return 0;
}