#include<iostream>
using namespace std;

int main(){
    int n = 10, a = 0, b = 1, result=0;

    if(n==0)
        b = 0;

    for(int i = 2; i<=n; i++){
        result = (a + b);
        a = b;
        b = result;
    }

    cout << "nth value in fibonacci is : " << b;

    return b;
}