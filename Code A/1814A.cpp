#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        cout << "YES\n";
    } else if (k % 2 != 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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