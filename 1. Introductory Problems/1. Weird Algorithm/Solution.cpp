#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // void solve(int n){
    //     cout<<n<<" ";
    //     while(n!=1){
    //         if(n%2==0){
    //             // if even then divide by 2
    //             n = n>>1;
    //         }
    //         else{
    //             n = (n * 3) + 1; // if odd then multiply by 3 and add 1
    //         }
    //         cout<<n<<" ";
    //     }
    // }


// Explanation:
// - Too Many Prints: Printing each step of the sequence directly (using cout in the loop)
//   slows down the program due to frequent I/O operations.
//
// - One Big Print: Using std::ostringstream accumulates all output in memory,
//   and prints it once at the end, greatly reducing I/O overhead.
//
// - Same Logic, Different Output Strategy: The sequence calculation is unchanged,
//   only the way we output the results is improved.
//
// - Improved Performance: By reducing the number of print calls, the code
//   executes faster and avoids time limit issues.


    void solve(long long n) {
        std::ostringstream out;
        out << n;
        while (n != 1) {
            if (n % 2 == 0)
                n >>= 1; // n /= 2
            else
                n = 3*n + 1;
            out << " " << n;
        }
        cout << out.str() << "\n";
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
    cin >> t;
    solution.solve(t);
    return 0;
}