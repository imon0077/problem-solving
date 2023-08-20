#include<iostream>
using namespace std;

int multiplyNumbers(int a, int b){
    if(b==0)
        return 0;
    else{
        return a + multiplyNumbers(a, b - 1);
    }
}

int main(){
    int result = multiplyNumbers(4, 5);
    cout << result;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)