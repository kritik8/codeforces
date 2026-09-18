#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long n;
    cin >> n;
    long long a = 1; 
    for (long long d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            a = n / d;
            break;
        }
    }

    cout << a << " " << n - a << "\n";
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