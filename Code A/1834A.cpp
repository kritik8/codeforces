#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;
   vector<int> a(n);
    int countminus = 0;
    for(int i=0; i<n; i++){
     cin >> a[i];
     if(a[i]== -1)
        countminus++;
    }
    
   int ops = 0;
    if (countminus > n / 2) {
        ops = countminus - (n / 2);
        countminus = n / 2; 
    }
    
    if (countminus % 2 != 0) {
        ops++;
    }
    
    cout << ops << "\n";
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