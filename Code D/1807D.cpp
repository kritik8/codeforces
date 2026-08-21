#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<long long> a(n + 1);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    
    long long total_sum = pref[n];
    
    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;
        
        long long old_range_sum = pref[r] - pref[l - 1];
        long long new_range_sum = (r - l + 1) * k;
        long long new_total_sum = total_sum - old_range_sum + new_range_sum;
        
        if (new_total_sum % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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