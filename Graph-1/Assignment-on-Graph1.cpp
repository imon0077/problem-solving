#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    Graph(int nodes) : V(nodes), adj(nodes) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int countConnectedComponents() {
        vector<bool> visited(V, false);
        int components = 0;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, visited);
                components++;
            }
        }

        return components;
    }

private:
    int V;
    vector<vector<int>> adj;

    void dfs(int node, vector<bool>& visited) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited);
            }
        }
    }
};

int main() {
    int A = 3; // Number of nodes

    Graph graph(A);

    // Manually set the edge connections
    graph.addEdge(1, 2);
    graph.addEdge(2, 1);

    int components = graph.countConnectedComponents();
    cout << "Number of connected components: " << components << endl;

    return 0;
}

/*
Time Complexity: O(A + B).

Space Complexity: O(A + B).
*/