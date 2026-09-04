#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int total0=0, total1=0;
    for(char &ch: s){
        if(ch=='1')
            total1++;
        else
            total0++;
    }
    int p0=0, p1=0;
    int maxk=0;
    for(int i=0; i< s.length(); i++){
        if(s[i]=='0') p0++;
        else p1++;

        if(p0 <= total1 && p1 <= total0){
            maxk = i + 1;
        }else{
            break;
        }
    }
    cout << s.length() - maxk << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}