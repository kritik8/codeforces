#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p; 
    cin >> n >> p;
    vector<int> a(n), b(n);
    vector<pair<long long, long long>> residents(n);
    for (int i = 0; i < n; ++i) {
        cin >> residents[i].second;
    }
    for (int i = 0; i < n; ++i) {
        cin >> residents[i].first;
    }
    sort(residents.begin(), residents.end());
    long long total_cost = p;
    long long remaining = n - 1;

    for (int i = 0; i < n && remaining > 0; i++) {
        
        if (residents[i].first >= p) {
            break;
        }

        long long can_share = min(remaining, residents[i].second);
        total_cost += can_share * residents[i].first;
        remaining -= can_share;
    }

    // Any remaining residents are notified directly by Pak Chanek
    total_cost += remaining * p;

    cout << total_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}