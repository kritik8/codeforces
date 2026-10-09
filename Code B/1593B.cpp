#include <bits/stdc++.h>
using namespace std;
int solvepair(const string& s, char a, char b){
    int n = s.length();

    int pos =-1;
    for(int i= n-1; i>= 0; i--){
        if(s[i] == b){
            pos = i;
            break;
        }
    }
    if(pos == -1) return 1e9;
    int poss = -1;
    for(int i= pos -1; i>= 0; i--){
        if(s[i] == a){
            poss = i;
            break;
        }
    }
    if(poss == -1) return 1e9;
    return (n - 1 - pos) + (pos - 1 - poss);
}
void solve() {
   string s; cin >> s;
   vector<pair<char, char>> target = {
    {'0', '0'},
    {'5', '0'},
    {'2', '5'},
    {'7', '5'}
   };
   int mini = 1e9;
   for(const auto& tar: target){
    mini = min(mini, solvepair(s, tar.first, tar.second));
   }
   cout << mini << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}