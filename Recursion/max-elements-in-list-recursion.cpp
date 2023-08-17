#include<iostream>

using namespace std;

int maxArrayElements(int arr[], int start, int n){
    if(start == n)
        return 0;
 
    return max(arr[start], maxArrayElements(arr, start+1, n));   
}

int main(){
    int arr[] = { 3, 5, 6, 8, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxArrayElements(arr, 0, n);

    cout << result << endl;
    return 0;
}