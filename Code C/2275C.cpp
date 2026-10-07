#include <bits/stdc++.h>
using namespace std;

const int offset = 40000; 
int fre[80005];
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int m = n-4;
    vector<long long> b(m+1);
    for(int i=1; i<=m; i++){
        b[i] = a[i] + a[i+2] - a[i+4];
        fre[b[i]+offset]++;
    }
    long long res=0;
    for(int i=1; i<=m; i++){
        long long count = fre[b[i]+offset];
        if(count > 0){
            res += 1LL*count*(count-1) / 2;
            fre[b[i]+offset] = 0;  
        }
    }
    long long nott =0;
    for(int i=1; i<=m ; i++){
        if( i+2 <= m && b[i] == b[i+2]){
            nott++;
        }
        if(i+4 <= m && b[i] == b[i+4]){
            nott++;
        }
    }
    cout << res - nott << "\n";
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