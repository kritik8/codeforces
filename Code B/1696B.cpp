#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int seg=0;
    for(int i=0; i<n; i++){
        if(a[i] != 0 && (i==0 || a[i-1] == 0))
        seg++;
    }
    if(seg ==0)
        cout << 0 << '\n';
    else if(seg == 1)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
   
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