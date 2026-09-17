#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> count_right(26, 0);
    vector<int> count_left(26, 0);

    int distinct_right = 0;
    int distinct_left = 0;

    // Initially, all characters belong to the right substring
    for (char c : s) {
        if (count_right[c - 'a'] == 0) {
            distinct_right++;
        }
        count_right[c - 'a']++;
    }

    int max_sum = 0;

    // Shift split point from left to right (split after index i)
    // Non-empty strings means i runs from 0 to n - 2
    for (int i = 0; i < n - 1; ++i) {
        int idx = s[i] - 'a';

        // Add s[i] to left substring
        if (count_left[idx] == 0) {
            distinct_left++;
        }
        count_left[idx]++;

        // Remove s[i] from right substring
        count_right[idx]--;
        if (count_right[idx] == 0) {
            distinct_right--;
        }

        max_sum = max(max_sum, distinct_left + distinct_right);
    }

    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}