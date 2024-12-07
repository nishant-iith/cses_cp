import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Solution{

    // solution function
    public void solve(long n){

        // to store the answer string
        StringBuilder sb = new StringBuilder();

        // storing the first value of the solution
        sb.append(n);

        while(n!=1){
            if(n%2==0){
                n = n >> 1;
            }
            else {
                n = 3*n + 1;
            }
            sb.append(" ").append(n);
        }
        System.out.println(sb.toString());
    }


    public static void main(String[] args) throws Exception{

        // For fast input reading
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the initial value for the Collatz sequence
        long n = Long.parseLong(br.readLine());

        // Create a solution instance and run the solve method
        Solution solution = new Solution();
        solution.solve(n);

    }
}