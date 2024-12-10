#include <bits/stdc++.h>
using namespace std;

// - One Big Print: Using std::ostringstream accumulates all output in memory,
//   and prints it once at the end, greatly reducing I/O overhead.
// while strong using out and while output use out.str()

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
        int n;
        cin >> n;
        if (n == 1) {
            cout <<"1\n";
            return;
        }
        if (n == 2 || n == 3) {
            cout <<"NO SOLUTION\n";
            return;
        }

        // Prepare a single string to accumulate the permutation
        // This minimizes the number of I/O operations
        string output;
        // Add even numbers first
        for (int i = 2; i <= n; i += 2) {
            output += to_string(i) + ' ';
        }
        // Add odd numbers next
        for (int i = 1; i <= n; i += 2) {
            output += to_string(i);
            if (i + 2 <= n) output += ' '; // Add space between numbers except after the last number
        }

        cout <<output <<'\n';
    }
};

int main() {
    fast_io();
    int t = 0;
    cin >> t;
    Solution solution;
    solution.solve(t);
    return 0;
}
