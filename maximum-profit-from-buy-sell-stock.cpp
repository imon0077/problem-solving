#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:

    int MaximumProfit(vector<int> &Prices){
        int buy = Prices[0], max_profit = 0, N = Prices.size();

        for (int i = 1; i < N; i++)
        {
            if(Prices[i] < buy){
                buy = Prices[i];
            }
            else if((Prices[i] - buy) > max_profit){
                max_profit = Prices[i] - buy;
            }
        }        
        return max_profit;
    }
};

int main(){
    Solution Obj;
    vector<int> Prices = {7, 1, 5, 3, 6, 4};

    int MaximumProfit = Obj.MaximumProfit(Prices);
    cout << "\n The Maximum Profit is : " << MaximumProfit;
    return 0;
}

//Time Complexity : O(n)
//Space Complexity : O(1)
