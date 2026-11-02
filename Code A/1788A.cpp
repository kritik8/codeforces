#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n); 
  int two =0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i]==2)
    two++;
  }
  if(two %2 == 1){
    cout << -1 << "\n";
    return;
  }
  int curr =0;
  int too = two/2;
    for (int i = 0; i < n; i++) {
        if(a[i]==2)
        curr++;
        if(curr==too){
        cout << i+1 << "\n";
        return;
        }
    }
cout << -1 << "\n";
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