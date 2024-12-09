import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        SolutionClass solver = new SolutionClass(in, out);
        solver.solve();
        out.close();
    }
}

class SolutionClass {
    private FastReader in;
    private PrintWriter out;

    public SolutionClass(FastReader in, PrintWriter out) {
        this.in = in;
        this.out = out;
    }

    public void solve() {
        int n = in.nextInt();
        long[] nums = new long[n];
        
        // Read the input array
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextLong();
        }

        long totalIncrements = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                totalIncrements += nums[i - 1] - nums[i];
                nums[i] = nums[i - 1]; // Adjust the current number
            }
        }

        out.println(totalIncrements);
    }
}

class FastReader {
    private BufferedReader br;
    private StringTokenizer st;

    public FastReader() {
        br = new BufferedReader(new InputStreamReader(System.in));
    }

    public String next() {
        while (st == null || !st.hasMoreTokens()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    public int nextInt() {
        return Integer.parseInt(next());
    }

    public long nextLong() {
        return Long.parseLong(next());
    }

    public double nextDouble() {
        return Double.parseDouble(next());
    }

    public String nextLine() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}
