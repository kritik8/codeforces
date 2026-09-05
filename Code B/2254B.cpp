#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int base = 1;
    for(int i=1; i< n; i++){
        if(s[i] != s[i-1]){
            base++;
        }
    }
    int mini = base;
    for(int i=1; i<n-1; i++){
        int before = (s[i] != s[i-1]) + (s[i] != s[i+1]);
        int after = (s[i-1] != s[i+1]);
        mini = min(mini, base - before + after);

    }
    cout << mini << "\n";
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