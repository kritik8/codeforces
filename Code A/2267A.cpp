#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
     char c;
     cin >> n >> c;
    string s;
    cin >> s;
    int ans =0;
    for(int i=0; i< n/2; i++)
    {
        char x = s[i];
        char y = s[n-1-i];

        if(x==y)
            ans +=0;
        else if(x == c || y == c){
            ans +=1;
        }else{
            ans += 2;
        }
    }
    cout << ans << "\n";
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