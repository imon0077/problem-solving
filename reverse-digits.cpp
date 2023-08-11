#include<iostream>
using namespace std;

int main(){
    int digits = 23423, reverse_num = 0;

    while(digits > 0){
        reverse_num = (reverse_num * 10) + (digits % 10);
        digits = digits / 10;
    }

    cout << "the reverse digit is : " << reverse_num;

    return 0;
}