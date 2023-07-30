/*
problem Name : Perfect peak of array
link : https://www.interviewbit.com/problems/perfect-peak-of-array/
Description : 
        Given an integer array A of size N.

        You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

        If it exists return 1 else return 0.

        NOTE: Do not consider the corner elements i.e A[0] and A[N-1] as the answer.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> A = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
    //vector<int> A = {5, 1, 4, 4}; 
    int n = A.size();

    int leftMax[n];
    int rightMin[n];
    int ans = 0;

    leftMax[0] = A[0];
    rightMin[n-1] = A[n-1]; // rightMin[8] = 9

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(A[i], leftMax[i-1]);
    }

    for (int i = n-2; i >= 0; i--) // 7
    {
        rightMin[i] = min(A[i], rightMin[i+1]);
        //rightMin[7] = min(7 , 9) = 7
        //rightMin[6] = min(10, 7)
    }

    for (int i = 1; i < n-1; i++)
    {
        if((A[i] > leftMax[i-1]) && (A[i] < rightMin[i+1] )){
            ans = 1;
        }
    }

    // if(ans == -1)
    //     cout << "the result is : " << 0 << endl;
    // else 
    //     cout << "the result is : " << 1 << endl;

        cout << "the result is : " << ans << endl;
    
    return 0;

}