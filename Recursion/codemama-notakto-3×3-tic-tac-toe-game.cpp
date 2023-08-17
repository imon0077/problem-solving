#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to determine the winner of a game
string determineWinner(vector<string>& board) {
    int xCount = 0, dotCount = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'X') {
                xCount++;
            } else if (board[i][j] == '.') {
                dotCount++;
            }
        }
    }
    
    // If there is an odd number of Xs, Alice wins
    if (xCount % 2 == 1) {
        return "Alice";
    }
    
    // If there are no empty cells, Bob wins
    if (dotCount == 0) {
        return "Bob";
    }
    
    // If Alice starts and there is an even number of empty cells,
    // she can always make a move to ensure that there will be an odd number of Xs left.
    // This means that Bob will be forced to make the last move and lose.
    return "Alice";
}

int main() {
    int N;
    cin >> N;
    
    for (int game = 1; game <= N; ++game) {
        //vector<string> board(3);
        // for (int i = 0; i < 3; ++i) {
        //     cin >> board[i];
        // }
        
        //string winner = determineWinner(board);
        //cout << "Game " << game << ": " << winner << endl;


        //vector<vector<int>> board = { { 0, 4, 0 }, { 0, 4, 0 }, { 0, 0, 4 } };
        vector<vector<string>> board;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                //cout << i << " " << j << " " << endl;
                cin >> board[i][j];
            }
            cout << endl;
        }


        // for (int i = 0; i < 3; ++i) {
        //     for (int j = 0; j < 3; ++j) {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << endl;
        // }

/*
.X.
.X.
..X
*/

    }
    
    return 0;
}

/*
bool isWinner(vector<string>& board) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
            return true;
        }
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
            return true;
        }
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        return true;
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
        return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    for (int game = 1; game <= N; ++game) {
        vector<string> board(3);
        for (int i = 0; i < 3; ++i) {
            cin >> board[i];
        }

        if (isWinner(board)) {
            cout << "Game " << game << ": " << "Alice" << endl;
        } else {
            cout << "Game " << game << ": " << "Bob" << endl;
        }
    }

    return 0;
}

*/


//Using Recursion
/*

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isWinner(vector<string>& board) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
            return true;
        }
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
            return true;
        }
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        return true;
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
        return true;
    }
    return false;
}

bool canWin(vector<string>& board, char player) {
    if (isWinner(board)) {
        return false;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == '.') {
                board[i][j] = player;
                if (!canWin(board, (player == 'X') ? 'O' : 'X')) {
                    board[i][j] = '.'; // Undo the move
                    return true;
                }
                board[i][j] = '.'; // Undo the move
            }
        }
    }
    
    return false;
}

int main() {
    int N;
    cin >> N;

    for (int game = 1; game <= N; ++game) {
        vector<string> board(3);
        for (int i = 0; i < 3; ++i) {
            cin >> board[i];
        }

        if (canWin(board, 'X')) {
            cout << "Game " << game << ": " << "Alice" << endl;
        } else {
            cout << "Game " << game << ": " << "Bob" << endl;
        }
    }

    return 0;
}


*/



// Codemama
/*

#include <bits/stdc++.h>
using namespace std;


// Function to determine the winner of a game
string determineWinner(vector<string>& board) {
    int xCount = 0, dotCount = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'X') {
                xCount++;
            } else if (board[i][j] == '.') {
                dotCount++;
            }
        }
    }

    // If there is an odd number of Xs, Alice wins
    if (xCount % 2 == 1) {
        return "Alice";
    }

    // If there are no empty cells, Bob wins
    if (dotCount == 0) {
        return "Bob";
    }

    // Otherwise, Alice will always make a move to ensure that the board
    // doesn't have three consecutive Xs, putting Bob in a losing position.
    return "Bob";
}

int main() {
    int N;
    cin >> N;

    for (int game = 1; game <= N; ++game) {
        vector<string> board(3);
        for (int i = 0; i < 3; ++i) {
            cin >> board[i];
        }

        string winner = determineWinner(board);
        cout << "Game " << game << ": " << winner << endl;
    }

    return 0;
}

*/