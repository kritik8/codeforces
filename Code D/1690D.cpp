#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int currw =0;
    for(int i=0; i<k; i++){
        if(s[i]=='W') currw++;
    }
    int minw = currw;
    for(int i=k; i<n; i++){
        if(s[i]=='W') currw++;
        if(s[i-k]=='W') currw--;
        minw = min(minw, currw);
    }
    cout << minw << "\n";
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