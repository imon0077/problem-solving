#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        for (const vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        unordered_set<int> visited;
        return dfs(graph, source, destination, visited);
    }

    bool dfs(unordered_map<int, vector<int>>& graph, int source, int destination, unordered_set<int>& visited) {
        if (source == destination) {
            return true;
        }

        visited.insert(source);

        if (graph.find(source) != graph.end()) {
            for (int neighbor : graph[source]) {
                if (visited.find(neighbor) == visited.end() && dfs(graph, neighbor, destination, visited)) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {
    int n = 6;
    int source = 0;
    int destination = 5; 

    vector<vector<int>> edges = {{0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}}; 

    Solution solution;
    if (solution.validPath(n, edges, source, destination)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
/*
Time Complexity:  O(m + n)
Space Complexity:  O(m + n)
*/