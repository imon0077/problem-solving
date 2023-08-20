#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
vector<int> memo;

    int find_fib(int n) {
        if(n <= 1){
            return n;
        }

        if(memo[n] != -1){
            return memo[n];
        }

        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }

    int fib(int n) {
        memo.assign(n+1, -1);
        return find_fib(n);
    }
};