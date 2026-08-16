#include   <bits/stdc++.h>
using namespace std;    
int main(){
        int n; cin >> n;
        vector<int> a(n);
        int x=INT_MAX;
        int diff =0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            diff = abs(a[i]);
            x = min(x,diff);
        }
        cout << x << endl;
    
    return 0;
}