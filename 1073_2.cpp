#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int n; cin >> n;
       vector<int> a(n+1, 0);
       for(int i=0; i<n; i++){
           int b; cin >> b;
           if(b >= 0 && b <= n)
            a[b]++;
       }
       int maxi=0;
       while(maxi <= n && a[maxi]>0){
        maxi++;
       }
       if(maxi ==0)
        cout << "NO" << endl;
    else if(maxi == 1)
        cout << (a[0]==1 ? "YES" : "NO") << endl;
    else
        cout << "YES" << endl;
        
    }
    return 0;
}