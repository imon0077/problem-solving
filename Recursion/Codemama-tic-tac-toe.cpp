#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;

    for (int game = 1; game <= N; game++) {
        char arr1[3][3];
        int i, j;

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                cin >> arr1[i][j];
            }
        }  


        // int xCount = 0, dotCount = 0;
        // for (i = 0; i < 3; i++) {
        //     for (j = 0; j < 3; j++) {
        //         if (arr1[i][j] == 'X') {
        //             xCount++;
        //         } else if (arr1[i][j] == '.') {
        //             dotCount++;
        //         }
        //     }
        // }
        

        // cout << "xCount " << xCount << endl;
        // cout << "dotCount " << dotCount << endl;


        string winner = "";

        // // If there is an odd number of Xs, Alice wins
        // if (xCount % 2 == 1) {
        //     winner = "Alice";
        // }
        
        // // If there are no empty cells, Bob wins
        // if (dotCount == 0) {
        //     winner = "Bob";
        // }

         

        for (i = 0; i < 3; ++i) {
            if (arr1[i][0] == 'X' && arr1[i][1] == 'X' && arr1[i][2] == 'X') {
                winner = "Alice";
            }
            if (arr1[0][i] == 'X' && arr1[1][i] == 'X' && arr1[2][i] == 'X') {
                winner = "Alice";
            }
        }

        //Tracking Corner Elements
        if (arr1[0][0] == 'X' && arr1[1][1] == 'X' && arr1[2][2] == 'X') {
            winner = "Alice";
        }
        if (arr1[0][2] == 'X' && arr1[1][1] == 'X' && arr1[2][0] == 'X') {
            winner = "Alice";
        }

        //Tracking last move
        if (arr1[2][2] == 'X') {
            winner = "Bob";
        }
        
       if(winner != "Alice")
            winner = "Bob";

        cout << "Game " << game << ": " << winner << endl;
        
    }

    return 0;
}