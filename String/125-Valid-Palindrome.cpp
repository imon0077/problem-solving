#include <iostream>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s){
        s = removeNoise(s);

        int n = s.size();
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-i-1])
                return false;
        }

        return true;
    }

    string removeNoise(string s) {
        int n = s.size();
        string a;

        for(int i = 0; i < n; i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                a.push_back(tolower(s[i]));
            }
        }
        return a;
    }
};

int main(){
    Solution obj;

    bool result = obj.isPalindrome("A man, a plan, a canal: Panama"); 

    cout << result << endl;

    return 0;
}