#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long sum_sec =0;
    long long globalminfirst = 1e9;
    long long globalminsec = 1e9;
    for(int i=0;i<n;i++){

        int m;
        cin >> m;
        vector<long long> a(m);
        for(int j=0; j<m; j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        long long firstmin = a[0];
        long long secmin = a[1];
        sum_sec += secmin;
        globalminfirst = min(globalminfirst, firstmin);
        globalminsec = min(globalminsec, secmin);

    }
    if(n==1){
        cout << globalminfirst << "\n";
        return;
    }

    long long ans = sum_sec + globalminfirst - globalminsec;
    cout << ans << "\n";
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