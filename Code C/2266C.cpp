#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='1'){
        int z = 0;
        for(char &ch: s){
            if(ch=='0') 
                z++;
        }
        cout << z << "\n";
        return;
    }
    int first =-1;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            first=i;
            break;
        }
    }
    if(first==-1){
        cout << 0 << "\n";
        return;
    }
    vector<int> vec(n+1, 0);
    for(int i=0; i<n; i++){
        vec[i+1]=vec[i] + (s[i] == '1' ? 1 : 0);
    }
    int ans=vec[n];
    int mini = n;
    for(int i=first; i<=n; i++){
        int one = vec[i];
        int zero = (n-i)-(ans - vec[i]);
        mini =min(mini, one+zero);
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