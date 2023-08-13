#include<iostream>

using namespace std;

int main(){
    string a = "11";
    int aLen = a.size();

    for (int i = 0; i < aLen; i++)
    {
        cout << "\n " << a[i] - '0';
    }
    

    return 0;
}