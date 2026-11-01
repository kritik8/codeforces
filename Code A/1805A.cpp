#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
   cin >> n;
   vector<int> a(n);
   int ans = 0;
   for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans ^= a;
    }
    
    if (n % 2 != 0) {
        cout << ans << "\n";
    } else {
        if (ans == 0) 
            cout << 0 << "\n";
         else 
            cout << -1 << "\n";
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