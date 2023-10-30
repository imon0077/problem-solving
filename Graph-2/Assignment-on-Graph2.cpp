#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100001;
vector<int> adj[MAX_N];
int isGood[MAX_N];
long long paths = 0;

void dfs(int node, int parent, int goodCount, int C) {
    if (isGood[node]) {
        goodCount++;
    } else {
        goodCount = 0;
    }

    if (goodCount > C) {
        return;
    }

    bool isLeaf = true;
    for (int child : adj[node]) {
        if (child != parent) {
            isLeaf = false;
            dfs(child, node, goodCount, C);
        }
    }

    if (isLeaf) {
        paths++;
    }
}

int main() {
    int N, C;
    N = 6;  
    C = 1; 

    int goodNodes[] = {0, 1, 0, 1, 1, 1}; 
    
    for (int i = 1; i <= N; i++) {
        isGood[i] = goodNodes[i];
    }

    int edges[][2] = {{1, 2}, {1, 5}, {1, 6}, {2, 3}, {2, 4}}; 
    for (int i = 0; i < N - 1; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, 0, C);

    cout << paths << endl;

    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(N)
*/