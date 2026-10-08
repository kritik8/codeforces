#include <bits/stdc++.h>
using namespace std;

void solve() {
   int x,k;
   cin >> x >> k;
   if(x%k != 0 || x<k){
    cout << 1 << "\n";
    cout << x << "\n";
   }
   else{
    cout << 2 << "\n";
    cout << x - k + 1 << " " << k - 1 << "\n";
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