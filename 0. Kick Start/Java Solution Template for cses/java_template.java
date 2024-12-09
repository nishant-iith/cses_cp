import java.io.*;
import java.util.*;

public class java_template {
    public static void main(String[] args) {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        Solution solver = new Solution(in, out);
        solver.solve();
        out.close();
    }
}

class Solution {
    private FastReader in;
    private PrintWriter out;

    public Solution(FastReader in, PrintWriter out) {
        this.in = in;
        this.out = out;
    }

    public void solve() {
        // Implement your solution logic here
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
