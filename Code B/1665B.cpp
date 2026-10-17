#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_freq = 1;
    int current_freq = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            current_freq++;
        } else {
            current_freq = 1;
        }
        max_freq = max(max_freq, current_freq);
    }

    if (max_freq == n) {
        cout << 0 << "\n";
        return;
    }
    int ans = n - max_freq;
    int c = max_freq;

    while (c < n) {
        ans++; // 1 clone operation
        c *= 2;
    }

    cout << ans << "\n";
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