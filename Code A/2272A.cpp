#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    auto lambda =[&](vector<int> & vec){
        vector<bool> done(n+1, false); vector<int> ff(n);
        int curr =0;
        for(int i=0; i<n; i++){
            done[a[i]] = true;

            while(done[curr]){
                curr++;
            }
            ff[i] = curr;
        }
        sort(ff.begin(), ff.end());
        return ff[n-k];
    };
int best = lambda(a);
int idx = -1, idxx = -1;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        swap(a[i], a[j]);

        int val = lambda(a);
        if(val > best){
            best=val; idx=i; idxx = j;
        }
        swap(a[i], a[j]);
    }
}
if(idx == -1)
    cout << -1 << '\n';
else
    cout << idx +1 << " " << idxx + 1 << "\n";
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