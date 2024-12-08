#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(string str){
        if(str.empty()){ // handeling edge case 
            cout << 0 << endl;
            return;
        }

        int maxRun = 1;
        int currentRun = 1;
        char cur = str[0];

        for(int i = 1; i < str.size(); i++){
            if(cur == str[i]){
                currentRun++;
                maxRun = max(maxRun, currentRun);
            }
            else{
                cur = str[i];
                currentRun = 1;
            }
        }

        cout << maxRun << endl;
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
    string s;
    cin >> s;
    solution.solve(s);

    return 0;
}
