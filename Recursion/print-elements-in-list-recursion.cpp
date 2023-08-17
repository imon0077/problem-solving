#include<iostream>

using namespace std;

void printNumbers(int arr[], int start, int n){
    if(start == n)
        return;
 
    cout << arr[start] << "\n";
    printNumbers(arr, start+1, n);   
}

int main(){
    int arr[] = { 3, 5, 6, 8, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printNumbers(arr, 0, n);
    return 0;
}