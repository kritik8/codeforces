#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int ans = (s.length() - 1) * 9 + (s[0] - '0');
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