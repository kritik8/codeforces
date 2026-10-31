#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a,b, c,d ;
   cin >> a >> b >> c >> d;
    if (d < b) {
        cout << -1 << "\n";
        return;
    }

    long long y_moves = d - b;
    long long new_x = a + y_moves;

    if (new_x < c) {
        cout << -1 << "\n";
    } else {
        long long x_moves = new_x - c;
        cout << y_moves + x_moves << "\n";
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