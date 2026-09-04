#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    int even =0;
    int minops=k;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) even++;

        int rem = a[i]%k;
        int ops = (rem==0) ? 0 : k-rem;
        minops = min(minops, ops);
    }
    if(k==4){
        int opsviaeven = max(0, 2- even);
        minops = min(minops, opsviaeven);
    }
cout << minops << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}