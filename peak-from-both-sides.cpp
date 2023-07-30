/*
problem Name : Pick from both sides!
link : https://www.interviewbit.com/problems/pick-from-both-sides/
Description : 
        Given an integer array A of size N.
        You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.
        Find and return this maximum possible sum.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    //vector<int> A = {5, -2, 3, 1, 2};  // B = 3
    vector<int> A = {-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35};

    /*
        The expected return value:  6253
    */

    int B, sum, max_sum, x , y;

    B = 48;
    sum = 0;

    for (int i = 0; i < B; i++)
    {
        sum += A[i];
    }

    max_sum = sum;
    int n = A.size();

    for (int j = 0; j < B; j++)
    {
        x = A [B - 1 - j]; // 2, 1, 0
        y = A[n - 1 - j]; // 4, 3, 2

        sum = sum - x + y;

        if(sum > max_sum){
            max_sum = sum;
        }
    }

    cout << "Maximum sum of 3 numbers is : " << max_sum << endl;

    return 0;
    
    
}