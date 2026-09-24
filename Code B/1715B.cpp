#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    long long min_s = k * b;
    
    // Check if s is too small
    if (s < min_s) {
        cout << -1 << "\n";
        return;
    }

    long long rem = s - min_s;

    // Check if rem exceeds the maximum possible sum of remainders: n * (k - 1)
    // To prevent 64-bit overflow with n * (k - 1), we can compare rem / n >= k
    if (rem > 0 && (k == 1 || rem / (k - 1) > n || (rem / (k - 1) == n && rem % (k - 1) > 0))) {
        cout << -1 << "\n";
        return;
    }

    vector<long long> a(n, 0);
    a[0] = min_s;

    for (int i = 0; i < n; ++i) {
        long long add = min(rem, k - 1);
        a[i] += add;
        rem -= add;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
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