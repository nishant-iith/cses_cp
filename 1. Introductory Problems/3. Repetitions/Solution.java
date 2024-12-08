import java.io.BufferedReader;
import java.io.InputStreamReader;
// import java.io.IOException;

class Solution{
    //solution function
    public void solve(String str){ // Time Complexity: O(n)
        //empty string
        if(str.isEmpty()){
            System.out.println(0);
            return;
        }

        int len = str.length();
        int maxRun = 1;
        int currentRun = 1;
        char cur = str.charAt(0);

        for(int i = 1; i < len; i++){
            // if same
            if(cur == str.charAt(i)){
                currentRun++;
            }
            // if different
            else{
                cur = str.charAt(i);
                currentRun = 1;
            }
            // updating maxRun
            if(currentRun > maxRun){
                maxRun = currentRun;
            }
        }
        System.out.println(maxRun);
    }

    //main function
    public static void main(String[] args) throws Exception{ // Time Complexity: O(n)
        /// using BufferedReader for fast input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // read the string input 
        String str = br.readLine();

        //create the solution instance and solve 
        Solution solution = new Solution();

        // solving
        solution.solve(str);
    }
}
