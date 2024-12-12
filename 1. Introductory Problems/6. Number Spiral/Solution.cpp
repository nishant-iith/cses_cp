#include <bits/stdc++.h>
using namespace std;

// - One Big Print: Using std::ostringstream accumulates all output in memory,
//   and prints it once at the end, greatly reducing I/O overhead.

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ld PI = 3.1415926535897932384626433832795;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

class Solution {
public:
    void solve() {
        int t;
        cin >> t;
        ostringstream out; // Collect all outputs to print at once
        while (t--) {
            ll y, x;
            cin >> y >> x;
            ll layer = max(y, x);
            ll layerStart = (layer - 1) * (layer - 1) + 1;
            ll layerEnd = layer * layer;

            if (layer % 2 == 0) {
                if (y == layer) {
                    out << layerStart + (x - 1) << "\n";
                } else {
                    out << layerEnd - (y - 1) << "\n";
                }
            } else {
                if (x == layer) {
                    out << layerStart + (y - 1) << "\n";
                } else {
                    out << layerEnd - (x - 1) << "\n";
                }
            }
        }
        cout << out.str(); // Print all outputs at once
    }
};

int main() {
    fast_io();
    int t = 1;
    Solution solution;
    while (t--) {
        solution.solve();
    }
    return 0;
}
