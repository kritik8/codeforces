#include <bits/stdc++.h>
using namespace std;
void solve() {
   int n; cin >> n;
   vector<int> a(n);
    for(int i=0; i<n; i++){
         cin >> a[i];
    }
    map<int, int> mp;
    int maxfreq =0;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
        maxfreq = max(maxfreq, mp[a[i]]);
    }

    int odd =0, even =0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0) even++;
        else odd++;
    }
    maxfreq = max(maxfreq, odd);
    int evenmod =0, oddmod=0;
    for(int i=0; i<n; i++){
        if (a[i]%2 == 0) {
            if (a[i] % 4 == 0) {
                evenmod++;
            } else {
                evenmod++;
            }
        }
    }
    maxfreq = max({maxfreq, evenmod, oddmod});

    cout << maxfreq << "\n";
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