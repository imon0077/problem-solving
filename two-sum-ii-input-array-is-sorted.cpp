#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size(), i, j = N-1;
        for(i = 0; i<N-1;){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
            else if(nums[i] + nums[j] > target){
                j--;
            }
            else{
                i++;
            }     
        }
        return {0, 0};

    }
};

int main(){
    vector<int> A = {2,7,11,15}; 
    int target = 9;

    Solution obj;
    
    obj.twoSum(A, target);
    
    
    return 0;
}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int N = numbers.size(), i, j = N-1;
//         for(i = 0; i<N-1; i++){
//             for(j=N-1; j>i; j--){
//                 if(numbers[i] + numbers[j] == target){
//                     return {i+1, j+1};
//                 }
//             }            
//         }
//         return {0, 0};

//     }
// };