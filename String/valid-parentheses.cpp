#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    stack<char> stk;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
            stk.push(s[i]);
        }
        else if(stk.empty()){
            return false;
        }
        else if((s[i] == ')' && stk.top() != '(') || (s[i] == '}' && stk.top() != '{') || (s[i] == ']' && stk.top() != '[') ){
            return false;
        }
        else{
            stk.pop();
        }        
    }
    return stk.empty();
}

int main(){
    
    cout << isValid("()") << endl;

    cout << isValid("(){}[]") << endl;

    cout << isValid("(]") << endl;

    cout << isValid("([)]") << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)