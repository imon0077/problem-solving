#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100001;

vector<int> adj[MAX_N];
vector<bool> visited(MAX_N, false);
vector<bool> stackRecursion(MAX_N, false);

bool isCyclicUtil(int node) {
    if (!visited[node]) {
        visited[node] = true;
        stackRecursion[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor] && isCyclicUtil(neighbor)) {
                return true;
            } else if (stackRecursion[neighbor]) {
                return true;
            }
        }
    }

    stackRecursion[node] = false;
    return false;
}

bool isCyclic(int A, vector<vector<int>> &B) {
    for (int i = 0; i < B.size(); i++) {
        adj[B[i][0]].push_back(B[i][1]);
    }

    for (int i = 1; i <= A; i++) {
        if (!visited[i] && isCyclicUtil(i)) {
            return true;
        }
    }

    return false;
}

int main() {
    int A = 5; 
    int M = 6; 
    vector<vector<int>> B = {
        {1, 2},
        {4, 1},
        {2, 4},
        {3, 4},
        {5, 2},
        {1, 3}
    };

    if (isCyclic(A, B)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
/*
Time Complexity:
The time complexity of this solution is O(A + M), where A is the number of nodes, and M is the number of edges.

Space Complexity:
The space complexity is O(A + M) for the adjacency list and arrays used for DFS.
*/