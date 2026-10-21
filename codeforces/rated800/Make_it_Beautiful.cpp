#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& arr) {
int sum = 0;

for (int i = 0; i < arr.size(); i++) {
    if (sum == arr[i]) {
        return true;
    }
    sum += arr[i];
}

return false;

}

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

    sort(arr.begin(), arr.end());

    if (n == 1) {
        cout << "YES\n" << arr[0] << '\n';
        continue;
    }

    if (arr[0] == arr[n - 1]) {
        cout << "NO\n";
        continue;
    }

    int maximum = arr[n - 1];

    vector<int> nums;
    nums.push_back(maximum);

    for (int i = 0; i < n - 1; i++) {
        nums.push_back(arr[i]);
    }

    if (!check(nums)) {
        cout << "YES\n";

        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }

        cout << '\n';
    } else {
        cout << "NO\n";
    }
}

return 0;


}
