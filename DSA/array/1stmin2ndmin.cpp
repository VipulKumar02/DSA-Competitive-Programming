#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    vector<int> minAnd2ndMin(vector<int> &a) {
        int n = a.size();

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        // One loop only
        for (int i = 0; i < n; i++) {
            int x = a[i];

            if (x < min1) {
                min2 = min1;
                min1 = x;
            }
            else if (x > min1 && x < min2) {
                min2 = x;
            }
        }

        // If second min not found
        if (min2 == INT_MAX)
            return {-1};

        return {min1, min2};
    }


int main() {
    vector<int> arr = {4, 2, 1, 1, 3};   // you can change values

    vector<int> res = minAnd2ndMin(arr);

    for (int x : res) cout << x << " ";
    return 0;
}
