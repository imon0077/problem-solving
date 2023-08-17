#include<iostream>

using namespace std;

int sumArrayElements(int arr[], int start, int n){
    if(start == n)
        return 0;
 
    return arr[start] + sumArrayElements(arr, start+1, n);   
}

int main(){
    int arr[] = { 3, 5, 6, 8, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArrayElements(arr, 0, n);

    cout << sum << "\n";
    return 0;
}