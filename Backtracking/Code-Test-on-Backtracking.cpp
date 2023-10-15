#include <iostream>
#include <string>

using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(string& str, int left, int right) {
    if (left == right) {
        cout << str << endl; 
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]); 
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]); 
    }
}

int main() {
    string input="abc";
    int n = input.length();
    generatePermutations(input, 0, n - 1);
    return 0;
}
/*
Time Complexity:  O(N!)
Space Complexity: O(N)
*/