#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (mp.size() > 2) {
            cout << "No\n";
        } 
        else if (mp.size() == 1) {
            cout << "Yes\n";
        } 
        else {
            auto it = mp.begin();
            int count1 = it->second;
            it++;
            int count2 = it->second;
            if (abs(count1 - count2) <= 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}