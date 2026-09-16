#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n;
   cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) 
         cin >> a[i];
    for(int i=0; i<n; i++) 
         cin >> b[i];
    
    vector<int> maxa(2*n+1, 0), maxb(2*n+1, 0);
    int currlen =0;
    for(int i=0; i<n; i++){
        currlen++;
        if(i== n-1 || a[i] != a[i+1]){
            maxa[a[i]] = max(maxa[a[i]], currlen);
            currlen = 0;
        }
    }
    currlen =0;
    for(int i=0; i<n; i++){
        currlen++;
        if(i== n-1 || b[i] != b[i+1]){
            maxb[b[i]] = max(maxb[b[i]], currlen);
            currlen = 0;
        }
    }
    int res=0;
    for(int j=1; j<= 2*n; j++){
        res = max(res, maxa[j] + maxb[j]);
    }
    cout << res << "\n";
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