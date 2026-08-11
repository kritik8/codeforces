#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int n; cin >> n;
       string st; cin >> st;
       int a=0, b = n-1;
       vector<int> rp, lp;
       while(true){
           while(a < n && st[a]== '0')
            a++;
             while(b >= 0 && st[b]== '1')
            b--;
            if(a < b){
                lp.push_back(a);
                rp.push_back(b);
                a++;
                b--;
            }else{
                break;
            }
       }
       if(lp.empty())
        cout << "Bob" << endl;
        else{
            cout << "Alice" << endl;
        reverse(rp.begin(), rp.end());
        int p= (int)lp.size() + (int)rp.size();
        
        cout << p << endl;
        bool z=true;
        for(int m : lp){
            if(!z) cout << ' ';
            cout << (m+1);
            z=false;
        }
        for(int m : rp){
            if(!z) cout << ' ';
            cout << (m+1);
            z=false;
        }
        cout << endl;
    }
    }
    return 0;
}