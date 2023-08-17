#include<iostream>

using namespace std;

void printNumbers(int n){
    if(n < 1)
        return;

    printNumbers(n - 1);    
    cout << n << "\n";
}

int main(){
    printNumbers(10);
    return 0;
}