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
       vector<int> prev = {0} ;
       for(int i=1; i<=n;i++){
           int length = 1 << i;
           int have = 1 << (i-1);
           vector<int> curr;
           curr.reserve(length);
           
           for(int p : prev) curr.push_back((p << 1) | 1);
           
           for(int j =0; j< have ; j++){
               curr.push_back(j << 1);
           }
           prev.swap(curr);
       }
       for(size_t i=0; i< prev.size(); i++){
           if(i){
               cout << ' ';
           }
           cout << prev[i];
       }
       cout << endl;
   }
    return 0;
}