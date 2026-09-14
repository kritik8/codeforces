#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int res =0;
    int num = n/k;

    for(int i=0; i<num; i++){
        bool b = false;
        for(int j= 0; j< k; j++){
            if(s[i*k + j]=='0'){
                b= true;
                 break;

            }
        }
        if(!b) res++;
    }
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