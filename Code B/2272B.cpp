#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
     cin >> n;
     string s, ss;
     cin >> s >> ss;

     int one=0, two =0;
     for(int i=0; i<n;   i++){
        if(s[i] == 'f' && ss[i] == 'o')
            one++;
        else if(s[i] == 'o' && ss[i] == 'f')
            two++;
     }
    int mini = abs(one-two);
    cout << mini%2 << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}