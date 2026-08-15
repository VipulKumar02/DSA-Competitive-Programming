#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Anna gets one extra shared button if c is odd
        a += (c + 1) / 2;
        b += c / 2;

        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }

    return 0;
}