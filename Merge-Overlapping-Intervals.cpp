#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
        sort (intervals.begin(), intervals.end());
        int n = intervals.size();

        cout <<  " Test " << intervals[1][0];
        cout <<  " \n ================ \n ";

        for (int i = 1; i < n - 1 ; i++) {
            if(intervals[i][1] >= intervals[i + 1][0]) {

                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = max (intervals[i][1], intervals[i+1][1]);
                intervals[i][0] = - 1;

            }
        }

        vector<vector<int>> ans;
        for(int i = 0; i < n ; i++) {
            if (intervals[i][0] != - 1) {
                ans.push_back ({intervals[i][0], intervals[i][1]});
            }
        }
        return ans;
    }
};

int main(){
    //vector<vector<int>> A = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    vector<vector<int>> A = { { 3 }, { 1, 4 }, { 3, 5 }, { 7, 8 } };

    Solution obj;
    
    vector<vector<int>> result = obj.mergeIntervals(A);
    
    int N = result.size();
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j< result[i].size(); j++){
            cout << result[i][j] << " ";
        }        
    }
  
    return 0;
}