#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string str = "imon";
    int N = str.length(), flag = 0;

    string NewStr = str;

    /* Approach 1 using reverse() */
    /*
    reverse(NewStr.begin(), NewStr.end());

    if(str == NewStr)
        cout << "The String " << str << " is palindrome.";
    else
        cout << "The String " << str << " is not palindrome.";
    */

    /* Approach 2 using loop*/
    for (int i = 0; i < N; i++)
    {
        if(str[i] != str[N-i-1]){
            flag = 1;
            break;
           }
    }

    if(flag == 0)
        cout << "The String " << str << " is palindrome.";
    else
        cout << "The String " << str << " is not palindrome.";
    

    return 0;
}