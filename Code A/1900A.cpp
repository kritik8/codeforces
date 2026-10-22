#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int e =0;
        for(int i=0; i<n; i++){
            if(s[i] == '.') e++;
        }
        int ce=0, maxe =0;
        for(int i=0; i<n; i++){
            if(s[i] == '.') {
            ce++;
            maxe = max(maxe, ce);
            } else {
                ce = 0;
            }
        }
        if(maxe >= 3) cout << 2 << endl;
        else cout << e << endl;
    }
}