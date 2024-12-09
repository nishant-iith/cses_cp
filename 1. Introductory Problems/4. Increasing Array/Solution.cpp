#include <bits/stdc++.h>
using namespace std;

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
    void solve(vector<int> nums) {
        // Implement your solution logic here
        int i = 1;
        ll count = 0;
        while(i<nums.size()) {
            if(nums[i]<nums[i-1]) {
                count = count + (nums[i-1]-nums[i]);
                nums[i] = nums[i-1];
            }
            i++;
        }
        cout<<count << endl;
    }
};

int main() {
    fast_io();
    int n = 0;
    // For 1 test case at a time
    cin >> n; // size of array
    Solution solution;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solution.solve(arr);
    return 0;
}
