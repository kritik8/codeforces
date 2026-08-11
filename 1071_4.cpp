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
       ll maxi =0;
       for(int i=0;i<n; i++){
           cin >> a[i];
           maxi = max(maxi, a[i]);
       } sort(a.begin(), a.end());
       auto check = [&](ll k) -> bool{
           int i = int(lower_bound(a.begin(), a.end(), k) - a.begin());
           if(i >=2) return false;
           if(i ==n) return false;
           if(i==0) return true;
           return a[0] <= a[1]-k;
           
       };
       ll low =1, high = maxi, res=1;
       while(low <= high){
           ll mid = (low+high) >> 1;
           if(check(mid)) {
               res = mid;
               low = mid+1;
           }
           else{
               high = mid-1;
           }
       }
       cout << res << endl;
       
   }

    return 0;
}