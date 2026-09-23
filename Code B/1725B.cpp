#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d;
    cin >> n >> d;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    int wins = 0;
    int remaining_players = n;

    for (int i = 0; i < n; ++i) {
        long long needed = (d / a[i]) + 1;

        if (remaining_players >= needed) {
            wins++;
            remaining_players -= needed;
        } else {
            break;
        }
    }

    cout << wins << "\n";
    return 0;
}