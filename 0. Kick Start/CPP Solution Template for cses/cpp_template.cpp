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

// Debug macro
#define debug(x) cerr << #x << ": " << x << endl;

// Commonly used functions
template<typename T>
vector<T> readVector(int n) {
    vector<T> v(n);
    for(auto &x : v) cin >> x;
    return v;
}

template<typename T>
void printVector(const vector<T>& v) {
    for(const auto &x : v) cout << x << " ";
    cout << "\n";
}

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

class Solution {
public:
    void solveTestCase() {
        // Implement single test case logic here
    }
    
    void solve() {
        int t = 1;
        cin >> t;  // Read number of test cases
        while(t--) {
            solveTestCase();
        }
    }
};

int main() {
    fast_io();
    int t = 1;
    // Uncomment the following line if there are multiple test cases
    // cin >> t;
    Solution solution;
    while (t--) {
        solution.solve();
    }
    return 0;
}
