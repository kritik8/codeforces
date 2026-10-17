#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans=0;
    while(true){
        long long m = *max_element(a.begin(), a.end());
        if(m==0) break;
        int x = 63 - __builtin_clzll(m);
        long long q = 1LL << x;

        bool b = false;
        for(auto &i : a){
            if(i < q){
                b=true; break;
            }
        }
        if(b){
            ans += 2*q - 1; break;
        }
        ans += q;
        for(auto &i : a){
            i -= q;
        }
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