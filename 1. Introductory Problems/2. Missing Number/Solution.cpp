#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    void solve(vector<int> & nums){
        int n = nums.size();
        int xr = 0;
        for(int i = 1; i <= n + 1; i++){
            xr = xr^i;
        }
        for(int num:nums){
            xr = xr^num;
        }
        cout<<xr<<endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

// Explanation for using ios_base::sync_with_stdio(false) and cin.tie(nullptr):
//
// - ios_base::sync_with_stdio(false):
//   Disables the synchronization between C++ streams and C standard I/O.
//   This reduces overhead, allowing faster input/output operations.
//
// - cin.tie(nullptr):
//   Unties cin from cout, so cin does not flush cout before reading.
//   This means input operations won't wait for output operations to complete,
//   resulting in faster overall I/O.

    Solution solution;
    int t = 0;
    cin>>t;
    vector<int> arr(t-1);
    for(int i=0; i<t-1; i++){
        cin>>arr[i];
    }
    solution.solve(arr);
    return 0;
}
