#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_val = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    
    vector<int> b, c;
    for (int x : a) {
        if (x == max_val) {
            c.push_back(x);
        } else {
            b.push_back(x);
        }
    }
    
    // If all elements were equal to max_val, b will be empty
    if (b.empty()) {
        cout << -1 << "\n";
        return;
    }
    
    // Output lengths
    cout << b.size() << " " << c.size() << "\n";
    
    // Output array b
    for (int i = 0; i < (int)b.size(); ++i) {
        cout << b[i] << (i + 1 == (int)b.size() ? "" : " ");
    }
    cout << "\n";
    
    // Output array c
    for (int i = 0; i < (int)c.size(); ++i) {
        cout << c[i] << (i + 1 == (int)c.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}