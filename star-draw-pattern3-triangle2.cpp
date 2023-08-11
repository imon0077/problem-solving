#include<iostream>
using namespace std;

int main(){
    int n = 5;

    //first part
    for (int i = n; i >= 0; i--)
    {
        int space = i;

        for (int j = 0; j < 2 * n - i - 1; j++)
        {
            if(space){
                cout << " ";
                space--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    //second part
    for (int i = 0; i < n; i++)
    {
        int space = i;

        for (int j = 0; j < 2 * n - i - 1; j++)
        {
            /* loop will run 9 times when i = 0 */
            if(space){
                cout << " ";
                space--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    

    return 0;
}