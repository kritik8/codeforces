#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n,k; cin >> n >> k;
   vector<int> vec(n+2, 0);
   for(int i=0; i<n; i++){
    int a;
    cin >> a;
    if(a <= n+1){
        vec[a]++;
    }
   }

   int q =0;
   while(vec[q] >= 2*k){
    q++;
   }
    if(vec[q] == 2*k - 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

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