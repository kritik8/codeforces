#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, x;
    cin >>n >> k >> x;
    if(x!= 1){
        cout << "YES" << "\n";
        cout << n << "\n";
        for(int i=0; i<n; i++){
            cout << 1 << (i==n-1 ? "" : " ");
        }
        cout << "\n";
    }
    else{
        if(k==1)
            cout << "NO"    << "\n";
        else if(k==2){
            if(n%2==0){
                cout << "YES\n";
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; ++i) {
                    cout << 2 << (i == n / 2 - 1 ? "" : " ");
                }
                cout << "\n";
            }else{
                cout << "NO\n";
            }
        }
        else{
            cout << "YES\n";
            if(n%2==0){
                cout << n/2 << "\n";
                for(int i=0; i<n/2; i++){
                    cout << 2 << (i==n/2-1 ? "" : " ");
                }
                cout << "\n";
            }else {
                cout << 1 + (n - 3) / 2 << "\n";
                cout << 3 << " ";
                for (int i = 0; i < (n - 3) / 2; ++i) {
                    cout << 2 << (i == (n - 3) / 2 - 1 ? "" : " ");
                }
                cout << "\n";
            }
        }
    }
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