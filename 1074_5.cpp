#include <bits/stdc++.h>
using namespace std;
using intt = long long;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n,m, k;
        cin >> n >> m >> k;
        vector<intt> a(n);
        vector<intt> b(m);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m;i++) cin >> b[i];
        
        string s;
        cin >> s;
        vector<int> pr(k+1,0);
        for(int i=1; i<=k; i++){
            pr[i]=pr[i-1] + (s[i-1] == 'R' ? 1 : -1);
            
        }
        unordered_map<intt, int> prf;
        prf.reserve(k*2 +10);
        for(int i=1; i<=k; i++){
            if(!prf.count(pr[i]))
                prf[pr[i]]=i;
        }
        unordered_map<intt, int> idx;
        idx.reserve(n*2 + 10);
        for(int i=0; i<n; i++){
            idx[a[i]]=i;
        }
        const int IFT=k+1;
        vector<int> end2(n, IFT);
        for(auto &x: prf){
            intt d = x.first;
            int e = x.second;
            for(int j=0; j<m;j++){
                intt req= b[j] - d;
                auto id = idx.find(req);
                if(id != idx.end()){
                    int id2 = id->second;
                    if(e < end2[id2]){
                        end2[id2]=e;
                    }
                }
            }
        }
        vector<int> count(k+2, 0);
        for(int i=0; i<n; i++){
            int w = end2[i];
            if(w > k){
                count[k+1]++;
            }else{
                count[w]++;
            }
        }
        vector<int> count2(k+2, 0);
        for(int i=1; i<=k+1; i++)
            count2[i] = count2[i-1] + count[i];
            for(int i=1;i<=k; i++){
                int jinda = n-count2[i];
                cout << jinda << (i==k ? '\n': ' ');
            }
        }
    return 0;
}