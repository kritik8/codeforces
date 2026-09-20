#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n ; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    if(c=='g') {
        cout << 0 << "\n";
        return;
    }
    string ss = s + s;
    int maxwait = 0;
    int nextg = -1;
    for(int i=2*n - 1; i>=0; i--){
        if(ss[i]=='g'){
            nextg=i;
        }

        if(i < n && ss[i]==c){
            maxwait = max(maxwait, nextg - i);
        }
    }
    cout << maxwait << "\n";
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