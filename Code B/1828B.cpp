#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    int k = 0;
    for (int i = 0; i < n; i++) {
        int posdiff = abs((i + 1) - p[i]);
        k = std::gcd(k, posdiff);
    }
    cout << k << "\n";
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