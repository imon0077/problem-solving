#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, long long> memo;

long long calculateF(long long n) {
    if (n == 0) {
        return 1;
    }
    
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    long long result = calculateF(n / 2) + calculateF(n / 3);
    memo[n] = result;
    return result;
}

int main() {
    long long N;
    cin >> N;

    cout << "f(" << N << ") = " << calculateF(N) << endl;

    return 0;
}
