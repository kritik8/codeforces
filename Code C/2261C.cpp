#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<string> ot;
    int e=0, d =0;
    bool b = false;
    for(int i=0; i<n; i++){
        int x;
         cin >> x;
         if(x < 1 || x > 1000000) b = true;
         if ( x & 1) d++; else e++;
    }

    if(b){
        cout << "-1" << "\n";
        return;
    } if((e==0 && d==3) || (e==1 && d ==1 ) )
        ot.push_back("Larpity");
    else
        ot.push_back("Moggity");

    for(auto &i : ot) cout << i << "\n";
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