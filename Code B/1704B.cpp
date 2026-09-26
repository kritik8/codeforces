#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long l = a[0] - x;
    long long r = a[0] + x;
    int changes = 0;

    for (int i = 1; i < n; ++i) {
        long long cur_l = a[i] - x;
        long long cur_r = a[i] + x;

        l = max(l, cur_l);
        r = min(r, cur_r);

        if (l > r) {
            changes++;
            l = cur_l;
            r = cur_r;
        }
    }

    cout << changes << "\n";
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