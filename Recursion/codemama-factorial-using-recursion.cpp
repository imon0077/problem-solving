#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
     
int main() {
    int N;
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(N);
        cout << "Factorial of " << N << " is: " << result << endl;
    }

    return 0;
}

//In Codemama

/*

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
     
int main() {
    int N;
    cin >> N;

    int result = factorial(N);
    cout << result;

    return 0;
}

*/