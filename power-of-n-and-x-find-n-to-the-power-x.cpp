#include<iostream>
using namespace std;

int main (){
    int n = 5, x = 4, power=1;
    //Find n^x

    for(int i = 1; i <= x; i++){
        power = power * n; 
    }
    cout << "Power of n^x = " << power;
}