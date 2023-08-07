#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int N = numbers.size(), i, j = N-1;
    for(i = 0; i<N-1;){
        if(numbers[i] + numbers[j] == target){
            
            cout << "\n indexes are : " << i << ", " << j << endl;
            return {i, j};
        }
        else if(numbers[i] + numbers[j] > target){
            j--;
        }
        else{
            i++;
        }     
    }
    return {0, 0};
}

int main(){
    vector<int> A = {2,7,11,15}; 
    int target = 9;
    
    twoSum(A, target);
    
    
    return 0;
}

// Time complexity : O(n) 
// Space complexity : O(1)