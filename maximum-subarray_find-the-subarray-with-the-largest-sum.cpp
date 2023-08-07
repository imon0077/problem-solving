#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], running_sum = nums[0], N = nums.size();

        /*
        for(int i = 1; i < N; i++){
            if(nums[i] > nums[i] + running_sum){
                running_sum = nums[i];
            }
            else{
                running_sum = nums[i] + running_sum;
            }

            if(running_sum > max_sum){
                max_sum = running_sum;
            }
        }
        */

       // optimized above solution which were commented
        for(int i = 1; i < N; i++){
            running_sum = max(nums[i], nums[i] + running_sum);            
            max_sum = max(running_sum, max_sum);        
        }

        return max_sum;
    }
};

int main(){
    vector<int> A = {-2,1,-3,4,-1,2,1,-5,4};

    Solution obj;
    
    int result = obj.maxSubArray(A);
    cout << " \n" << result;
  
    return 0;
}