#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            a[i]--;
        }
        vector<vector<int>> joint(n);
        for(int i=0; i+1<n; i++){
            joint[a[i]].push_back(a[i+1]);
            joint[a[i+1]].push_back(a[i]);
        }
        vector<int> final=a;
        sort(final.begin(), final.end());
        for(int i=0; i+1<n; i++){
            joint[final[i]].push_back(final[i+1]);
            joint[final[i+1]].push_back(final[i]);
        }
        vector<int> shade(n, -1);
        bool b=true;
        
        for(int i=0; i<n && b; i++){
            if(shade[i] != -1)
                continue;
                
            queue<int> q; q.push(i);
            shade[i]=0;
            while(!q.empty() && b){
                int x=q.front();
                q.pop();
                for(int j : joint[x]){
                    if(shade[j]== -1){
                        shade[j]=shade[x]^1;
                        q.push(j);
                    }
                    else if(shade[j]==shade[x]){
                        b=false; break;
                    }
                }
            }
        }
        cout << (b ? "YES" : "NO") << endl;
    }
    return 0;
}