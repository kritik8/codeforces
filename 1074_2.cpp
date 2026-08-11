#include <bits/stdc++.h>
using namespace std;
long long solve(vector<int>& a){
    long long total=0;
    int maxi = INT_MIN;
    for(int p : a){
        if(p>maxi){
            maxi=p;
        }
        total+=maxi;
    }
    return total;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n ; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        long long res= solve(a);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(a[i], a[j]);
                res= max(res, solve(a));
                swap(a[i], a[j]);
            }
        }
        cout << res << endl;
        }
    
    return 0;
}