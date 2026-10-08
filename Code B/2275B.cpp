#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> vec;
    vector<bool> vis(n+1, false);

    for(int i=1; i<=n; i++){
        char c = s[i-1];
        if(c == '1'){
            vec.push_back(i);

        }else if (c == '2'){
            if(!vec.empty()){
                int d = vec.back();
                vec.pop_back();
                vis[d]=true;

            }else{
                vis[i]=true;
            }
        }else if(c=='3'){
            vis[i]=true;
    }
}
vector<int> ans;
for(int i=1; i<=n; i++){
    if(!vis[i]){
        ans.push_back(i);
    }
}
    cout << ans.size() << "\n";
    for(size_t i =0; i< ans.size(); i++){
        cout << ans[i] << (i+1 == ans.size() ? "" : " ");
    }
    cout << "\n";
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