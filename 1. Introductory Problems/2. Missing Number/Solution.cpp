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
