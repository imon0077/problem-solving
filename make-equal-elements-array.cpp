/*
problem Name : Make equal elements Array
link : https://www.interviewbit.com/problems/make-equal-elements-array/
Description : 
    You need to find out whether all array elements can be made equal or not by performing any of the 3 operations: add x to any element in array, subtract x from any element from array, do nothing.
    This operation can be performed only once on an element of array.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A = {2, 3, 1}; 
    sort(A.begin(), A.end());
    int x = 1, n = A.size(), flag = 1, newX;

    //1, 2, 3
    newX = A[0] + x;
    for(int i = 0; i < n; i++)
    {
        //cout << "\n A["<< i << "] : " << A[i] << endl;
        if(A[i] < newX)
            A[i] += x;
        else if(A[i] > newX)
            A[i] -= x;

        //cout << "\n After A["<< i << "] : " << A[i] << endl;
    }

    for (int i = 1; i < n; i++)
    {
        //cout << "\n A[i] : " << A[i] << endl;
        cout << "\n A[i] A["<< i << "] : " << A[i] << endl;
        cout << "\n A[i-1] A["<< i-1 << "] : " << A[i-1] << endl;
        cout << "\n A[i+1] A["<< i+1 << "] : " << A[+1] << endl;
        
        // if( (2 > 2) || (2 < 2) )
        //     flag = 0
        if( (A[i] > A[i-1]) ){
            flag = 0;
            break;
        }


    }
    
    cout << "\n Value of flag is : " << flag << endl;
    
    return 0;
}

// Time complexity : O(n)   || (A[i] < A[i+1])
// Space complexity : O(1)



/* In Interviewbit.com*/

// int Solution::solve(vector<int> &A, int B) {
//     sort(A.begin(), A.end());
    
//     int n = A.size(), flag = 1, newX;
    
//     newX = A[0] + B;
//     for(int i = 0; i < n; i++)
//     {
//         if(A[i] < newX)
//             A[i] += B;
//         else if(A[i] > newX)
//             A[i] -= B;
//     }
    
//     for (int i = 1; i < n; i++)
//     {
//         if( (A[i] > A[i-1]) ){
//             flag = 0;
//             break;
//         }
//     }
    
//     return flag;
    
// }