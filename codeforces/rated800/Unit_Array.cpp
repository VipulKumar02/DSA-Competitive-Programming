#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int neg = 0, pos = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1)
                neg++;
            else
                pos++;
        }

        int ans = 0;

        // Make the sum non-negative
        while (pos < neg) {
            pos++;
            neg--;
            ans++;
        }

        // Make the number of negatives even
        if (neg % 2 == 1)
            ans++;

        cout << ans << "\n";
    }

    return 0;
}