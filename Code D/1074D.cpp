#include <bits/stdc++.h>
using namespace std;
using intt = long long;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int m,n ; 
        intt h;
        cin >> n >> m >> h;
        vector<intt> a(n);
        for(int i=0;i<n; i++){
            cin >> a[i];
        }
        vector<intt> p(n,0);
        vector<intt> q(n, 0);
        int ans=1;
        
        for(int i=0; i<m; i++){
            intt x,y;
            cin >> x >> y;
            x--;
            if(q[x] != ans){
                p[x]=0;
                q[x]=ans;
            }
            p[x] += y;
            if(a[x] + p[x] > h){
                ans++;
            }
        }
        for(int j=0; j<n; j++){
            intt sum = (q[j] == ans) ? p[j]: 0LL;
            cout << (a[j] + sum) << (j+1 ==n ? '\n': ' ');
        }
        }
    return 0;
}