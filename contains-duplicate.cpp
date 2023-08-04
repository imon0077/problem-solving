/*
problem Name : Contains Duplicate
link : https://leetcode.com/problems/contains-duplicate/description/
Description : 
    Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:

   bool ContainsDuplicate(vector<int> &nums){
        int N = nums.size();

        // Time limit exceed for the bellow approach
        /*
        for (int i = 0; i < N; i++)
        {
            for (int j = i+1; j < N; j++)
            {
                if(nums[i] == nums[j]){
                    cout << "\n nums[i] nums["<< i << "] : " << nums[i] << endl;
                    return true;
                }
            }            
        }
        */

       sort(nums.begin(), nums.end());

       for (int i = 0; i < N-1; i++)
       {
            if(nums[i] == nums[i+1])
                return true;
       }
        
        return false;
   }
};

int main(){

    //creating object
    Solution Obj;
    vector<int> A = {1,2,3,1};

    bool result = Obj.ContainsDuplicate(A);

    cout << "The result is : " << result;

    return 0;
}