#include<iostream>
using namespace std;

int main(){
    int n = 8;

    for(int i = 1; i <= n; i++){
        if(n%i==0)
            cout << "\n " << i;
    }
    cout << "\n End result ";
    return 0;
}