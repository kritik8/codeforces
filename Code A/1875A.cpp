#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b, n;
    cin >> a >> b >> n;
    
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    long long totaltime = b-1;
    for (int i = 0; i < n; i++) {
        totaltime += min(arr[i], a);
    }
    
    cout << totaltime << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}