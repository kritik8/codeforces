#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if(n== a && a == b){
        cout << "Yes\n";
        return;
    }
    if(n - a - b >= 2)
        cout << "Yes\n";
    else
        cout << "No\n";
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