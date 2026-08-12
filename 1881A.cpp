#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , m;
        cin >> n >> m;
        string x , s;
        cin >> x >> s;
        int op=0;
        while(x.length() <s.length()){
            x += x;
            op++;
        }
        if(s.find(s) != string::npos){
            cout << op << endl;
        }
        x+=x; 
        op+= 1;
        if(s.find(s) != string::npos){
            cout << op << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}