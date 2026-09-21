#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = abs(a+c - b);
    int y ;
    if(a>= b){
        y = max(0, a-b-c);
    }else{
        y = b-a;
    }
    cout << max(x, y) << "\n";
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