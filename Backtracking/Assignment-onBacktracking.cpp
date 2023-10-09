#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<bool>>& visited, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

bool solveMazeUtil(int x, int y, vector<vector<int>>& maze, vector<vector<bool>>& visited, int N) {
    if (x == N - 1 && y == N - 1) {
        // Reached the destination
        return true;
    }

    // Possible directions: Up, Down, Left, Right
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    char direction[] = {'U', 'D', 'L', 'R'};

    for (int i = 0; i < 4; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (isSafe(nextX, nextY, maze, visited, N)) {
            visited[nextX][nextY] = true;

            if (solveMazeUtil(nextX, nextY, maze, visited, N)) {
                cout << direction[i];
                return true;
            }

            visited[nextX][nextY] = false;
        }
    }

    return false;
}

bool solveMaze(vector<vector<int>>& maze, int N) {
    vector<vector<bool>> visited(N, vector<bool>(N, false));

    if (maze[0][0] == 0 || maze[N - 1][N - 1] == 0) {
        // Source or destination is blocked
        return false;
    }

    visited[0][0] = true;
    if (solveMazeUtil(0, 0, maze, visited, N)) {
        return true;
    }

    return false;
}

int main() {
    int N = 2; // Size of the matrix (N x N)

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    if (solveMaze(maze, N)) {
        cout << "\nPath found! Rat can reach the destination.\n";
    } else {
        cout << "\nNo path found! Rat cannot reach the destination.\n";
    }

    return 0;
}
/*
Time Complexity:
The time complexity of this solution is O(4^(N^2)), where N is the size of the matrix. In the worst case, we explore four possible directions at each cell, and the matrix has N^2 cells.

Space Complexity:
The space complexity is O(N^2) for the visited matrix and O(N^2) for the input maze, so it's O(N^2) in total.
*/