import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Solution {

    // The solve method to find and print the missing number
    public void solve(int[] nums, int n) {
        int xr = 0;

        // XOR all integers from 1 to n
        for (int i = 1; i <= n; i++) {
            xr ^= i;
        }

        // XOR with all given numbers
        for (int num : nums) {
            xr ^= num;
        }

        //after these operations xr holds the missing number
        System.out.println(xr);
    }

    public static void main(String[] args) throws IOException {
        //use BufferedReader for fast input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the number t (the upper bound or total number of elements including the missing one)
        int t = Integer.parseInt(br.readLine().trim());

        if (t <= 0) {
            return;
        }

        //read the next line containing t-1 integers
        String[] parts = br.readLine().trim().split(" ");
        int[] arr = new int[t - 1];
        for (int i = 0; i < t - 1; i++) {
            arr[i] = Integer.parseInt(parts[i]);
        }

        // create a solution instance
        Solution solution = new Solution();
        // solve for the missing number and print it
        solution.solve(arr, t);
    }
}
