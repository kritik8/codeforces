#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long xK, yK, xQ, yQ;
    cin >> xK >> yK >> xQ >> yQ;

    // All possible directional offsets for the modified knight
    vector<pair<long long, long long>> directions = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    // Positions that can attack the King
    set<pair<long long, long long>> king_attackers;
    for (const auto& dir : directions) {
        king_attackers.insert({xK + dir.first, yK + dir.second});
    }

    // Positions that can attack the Queen
    set<pair<long long, long long>> queen_attackers;
    for (const auto& dir : directions) {
        queen_attackers.insert({xQ + dir.first, yQ + dir.second});
    }

    // Count positions present in both sets
    int common_count = 0;
    for (const auto& pos : king_attackers) {
        if (queen_attackers.count(pos)) {
            common_count++;
        }
    }

    cout << common_count << "\n";
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