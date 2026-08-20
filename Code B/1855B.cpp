#include <iostream>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    long long i = 1;
    while (n % i == 0) {
        i++;
    }
    cout << i - 1 << "\n";
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