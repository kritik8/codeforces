#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.length();

    bool up=false, down = false;
    for(int i=1; i<n-1; i++){
        if(s[i-1] == s[i+1]){
            if(s[i] == s[i-1]){
                up = true;
            }else{
                down = true;
            }
        }
    }
    int res = 1+ up + down;
    cout << res << "\n";

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