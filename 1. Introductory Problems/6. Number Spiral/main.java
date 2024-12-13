import java.util.*;

class Graph {
    public int V;
    public LinkedList<Integer>[] adj;

    // Constructor
    @SuppressWarnings("unchecked")
    Graph(int v) {
        this.V = v;
        this.adj = new LinkedList[v];
        for (int i = 0; i < v; i++) {
            adj[i] = new LinkedList<>();
        }
    }

    // Function to connect two nodes
    void addEdge(int x, int y) {
        adj[x].add(y); // Adds y to the adjacency list of x
        adj[y].add(x); // Adds x to the adjacency list of y
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Starting...");
        Graph g1 = new Graph(11);

        g1.addEdge(0, 1);
        g1.addEdge(1, 2);
        g1.addEdge(2, 3);
        g1.addEdge(4, 1);
        g1.addEdge(4, 5);
        g1.addEdge(5, 6);
        g1.addEdge(4, 7);
        g1.addEdge(7, 8);
        g1.addEdge(7, 9);
        g1.addEdge(9, 10);
    }
}
