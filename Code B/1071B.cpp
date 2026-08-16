#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   int t;
   cin >> t;
   while(t--){
       int n; 
       cin >> n;
       vector<long long> a(n);
       for(int i=0;i<n; i++) cin >> a[i];
       
       long long ans =0;
       for(int i=0; i+1 <n ; i++){
           ans += llabs(a[i+1] - a[i]);
       }
           ll res=0;
           res = max(res, llabs(a[1]-a[0]));
           
           res = max(res, llabs(a[n-1] - a[n-2]));
           
           for(int i=1; i+1 < n; i++){
               ll r = llabs(a[i]- a[i-1]) + llabs(a[i+1] - a[i]);
               ll add = llabs(a[i+1] - a[i-1]);
               res = max(res, r-add);
           }
           cout << (ans-res) << endl;
       
   }

    return 0;
}