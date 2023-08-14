#include <iostream>
using namespace std;

class Solution {
public:
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

    string result = obj.removeNoise("A man, a plan, a canal: Panama"); 

    cout << result << endl;

    return 0;
}