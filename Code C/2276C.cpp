#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n,k;
   cin >> n >> k;
   vector<int> a(n);
    for(int i=0; i<n; i++){
     cin >> a[i];
    }
    vector<int> b(n+1, 0);
    for(int i=1; i<=n; i++){
        b[i] = (b[i-1] + (a[i-1]%k)) % k;
    }

    vector<int> f(k, 0);
    long long ans = 0;

    for(int i = k+1; i <= n; i++){
        int j = i - (k+1);
        f[b[j]]++;
        ans += f[b[i]];
    }
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