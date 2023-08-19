#include <iostream>
#include <string>
using namespace std;

void generateStrings(int n, string current) {
    if (current.length() == n) {
        cout << current << endl;
        return;
    }

    generateStrings(n, current + 'a');
    //generateStrings(n, current + 'b');
    //generateStrings(n, current + 'c');
    
    if (current.empty() || current.back() != 'b') {
        generateStrings(n, current + 'b');
    }
    if (current.empty() || current.back() != 'c') {
        generateStrings(n, current + 'c');
    }
}

int main() {
    int n;
    cin >> n;

    generateStrings(n, "");

    return 0;
}
