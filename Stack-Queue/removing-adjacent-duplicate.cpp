#include <iostream>
#include <string>
#include <stack>

using namespace std;

string removeDuplicates(string s) {
    stack<char> charStack;

    for (char c : s) {
        if (!charStack.empty() && charStack.top() == c) {
            charStack.pop();
        } else {
            charStack.push(c);
        }
    }

    string result = "";
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    string input = "azxxzy";

    string result = removeDuplicates(input);
    cout << "Final string after duplicate removals: " << result << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)