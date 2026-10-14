
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> arr(4);

    while (t--) {
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
        }

        int x1 = arr[0];
        int y1 = arr[1];
        int x2 = arr[2];
        int y2 = arr[3];

        int moves = 0;

        if (y2 < y1) {
            cout << -1 << endl;
            continue;
        }

        moves = y2 - y1;
        x1 = x1 + moves;

        if (x1 >= x2) {
            moves += (x1 - x2);
            cout << moves << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

