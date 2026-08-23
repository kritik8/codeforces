#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int op=0;
    for(int i= n-2; i>=0; i--){
        while(a[i] >= a[i+1] && a[i] > 0){
            a[i] /= 2;
            op++;
        }
        if(a[i] >= a[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << op << endl;
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