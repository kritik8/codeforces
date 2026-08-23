#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    vector<int> freq(26, 0);
    for (char c : t) {
        freq[c - 'A']++;
    }

    int t_idx = (int)t.size() - 1;
    for (int i = (int)s.size() - 1; i >= 0; i--) {
        char c = s[i];
        if (freq[c - 'A'] > 0) {

            if (t_idx >= 0 && s[i] == t[t_idx]) {
                freq[c - 'A']--;
                t_idx--;
            } else {
                cout << "NO\n";
                return;
            }
        }
    }
    if (t_idx == -1)
        cout << "YES\n";
    else 
        cout << "NO\n";
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