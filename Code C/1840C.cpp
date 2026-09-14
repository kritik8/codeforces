#include <bits/stdc++.h>
using namespace std;
void solve() {
   long long n, k, q;
   cin >> n >> k >> q;
   vector<long long> a(n);
   long long cons=0;
   long long totalways=0;
   for(int i=0; i<n; i++) {
       cin >> a[i];
       if(a[i] <= q)
            cons++;
        else{
            if(cons >= k){
                long long m = cons - k + 1;
                totalways += (m * (m + 1)) / 2;
            }
            cons = 0;
        }
   }
   if (cons >= k) {
        long long m = cons - k + 1;
        totalways += (m * (m + 1)) / 2;
    }
cout << totalways << "\n";
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