#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<vector<char>> mat(10, vector<char>(10));

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> mat[i][j];
            }
        }

        int srow = 0, scol = 0;
        int erow = 9, ecol = 9;

        int val = 1;
        int sum = 0;

        while (srow <= erow && scol <= ecol) {

            // top
            for (int j = scol; j <= ecol; j++) {
                if (mat[srow][j] == 'X')
                    sum += val;
            }

            // right
            for (int i = srow + 1; i <= erow; i++) {
                if (mat[i][ecol] == 'X')
                    sum += val;
            }

            // bottom
            for (int j = ecol - 1; j >= scol; j--) {
                if (srow == erow)
                    break;

                if (mat[erow][j] == 'X')
                    sum += val;
            }

            // left
            for (int i = erow - 1; i >= srow + 1; i--) {
                if (scol == ecol)
                    break;

                if (mat[i][scol] == 'X')
                    sum += val;
            }

            srow++;
            scol++;
            erow--;
            ecol--;
            val++;
        }

        cout << sum << '\n';
    }

    return 0;
}