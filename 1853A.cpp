#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int min_ops = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            cout << 0 << "\n";
            return;
        }
        int diff = a[i + 1] - a[i];
        int ops = diff / 2 + 1;
        min_ops = min(min_ops, ops);
    }
    cout << min_ops << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}