/*
problem Name : Find highest product by multiplying 3 numbers from an array
link : https://www.interviewbit.com/problems/highest-product/
Description : 
        Given an integer array A of size N.
        Return the highest product possible by multiplying 3 numbers from the array.
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> A = {0, -1, 3, 100, 70, 50};
    int higest_product, product, n;
    higest_product = 0, product = 0, n = A.size();

    // Bruteforce solution; time complexity O(n^3)
    /*for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)            {
               product = A[i] * A[j] * A[k];
               if(product > higest_product){
                higest_product = product;
               }
            }
            
        }        
    }*/

    sort(A.begin(), A.end());

    //higest_product = A[n-1] * A[n-2] * A[n-3];   // it will be failed for test case [0, -1, 3, 100, -70, -50]

    int p1 = A[n-1] * A[n-2] * A[n-3];
    int p2 = A[0] * A[1] * A[n-1];

    higest_product = max(p1, p2);

    cout << "Highest product of multiplying 3 number from array is : " << higest_product;

    return higest_product;
    

}