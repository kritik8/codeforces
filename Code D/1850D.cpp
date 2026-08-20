#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int maxlen = 1;
    int currlen =1;
    for(int i=1; i<n; i++){
        if(a[i] - a[i-1] <= k)
            currlen++;
        else{
            currlen =1;
                }
        maxlen = max(maxlen, currlen);
    }
    cout << n-maxlen << "\n";
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