#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n; cin >> n;
        for(int x=1; x<= n; x++){
            cout << x*x +1 << (x==n ? '\n' : ' ');
        }
    }
    return 0;
}