#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s ; cin >> s;
    int k=0,a= -1, b = -1;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            k++;

            if(a == -1) a=i;
            b=i;
        }
    }
    if(k==1){
        cout << 0 << "\n";
    }
    else if(k==2)
        cout << 1 << "\n";
    else
        cout << b-a << "\n";
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