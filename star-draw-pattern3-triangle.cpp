#include<iostream>
using namespace std;

int main(){
    int n = 5, k = 0, j;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i; j++)
            cout<<" ";
        
        // i elements
        for(int j = 1; j <= i; j++)
        cout<<"* ";
        cout<<endl;
    }

    return 0;
}