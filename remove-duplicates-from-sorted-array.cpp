#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size(), j = 0;

        for(int i = 1; i < N; i++){
            if(nums[i] == nums[j]){                
                continue;
            }
            else{
                nums[j+1] = nums[i];
                j++;
            }
        }

        //printing result to check
        for (int i = 0; i <= j; i++)
        {
            cout << nums[i] << " ";
        }

        return j+1;
    }
};

int main(){
    vector<int> A = {0,0,1,1,1,2,2,3,3,4};

    Solution obj;
    
    int result = obj.removeDuplicates(A);
    cout << " \n" << result;
  
    return 0;
}