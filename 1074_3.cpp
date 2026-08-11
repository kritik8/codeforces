#include <bits/stdc++.h>
using namespace std;
using intt = long long;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n ; cin >> n;
        vector<intt> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        unordered_set<intt> st;
        st.reserve(n*2);
        for(intt x:a ){
            st.insert(x);
        }
        int ans=0;
        for(intt x : st){
            if(st.find(x-1) == st.end()){
                int y=1;
                intt now=x+1;
                while(st.find(now) != st.end()){
                    y++;
                    now++;
                }
                ans=max(ans, y);
            }
        }
        cout << ans << endl;
        
        }
    return 0;
}