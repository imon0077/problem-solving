#include<iostream>
using namespace std;

int main(){
    int number = 6, fact = 1;

    for(int i = 0 ; i < number; i++){
        fact = fact * (number - i);
    }
    cout << " fact is " << fact;
    return fact;
}