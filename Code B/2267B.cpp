#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> c(101, 0);
    int maxi =0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        c[a]++;
        maxi = max(maxi, c[a]);
    }
    vector<int> ans;
    ans.reserve(n);
    for(int i=1; i<= maxi; i++){
        for(int j=100; j>=1; j--){
            if(c[j] >= i){
                ans.push_back(j);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << (i+1 == n ? "\n" : " ");
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