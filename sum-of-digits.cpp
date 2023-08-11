#include<iostream>
using namespace std;

int main(){
    int digits = 62343, reverse_num = 0, sum = 0;

    while(digits > 0){
        reverse_num = (digits % 10);
        digits = digits / 10;
        sum = sum + reverse_num;
    }

    cout << "the sum of digits is : " << sum;

    return 0;
}