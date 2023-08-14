#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.size();
        int nLen = needle.size();

        for(int i = 0; i < hLen - nLen + 1; i++){
            if(haystack.substr(i, nLen) == needle)
                return i;
        }
        return -1;
    }
};

int main(){
    Solution obj;

    //int result = obj.strStr("sadbutsad", "sad"); // Output = 0
    int result = obj.strStr("leetcode", "leeto"); // Output = -1 because its not matched

    cout << result << endl;

    return 0;
}