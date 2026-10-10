#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a,b;
   cin >> a >> b;
   if(a==0 && b==0)
    {
        cout << 0 << "\n";
        return ;
    }
    if( b > a+1){
        cout << -1 << "\n"; 
    }
    else if((a-b)%2 == 0){
        cout << a << "\n";
    }else{
        cout << a+1 << "\n";
    }
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