#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& a) {
        int N = a.size();
        vector<int> b = {};
        for (int i=N-1; i>-1; i--){
            //cout << "\n indexes are : " << a[i] << endl;
            b.push_back(a[i]);
        }
        return b;
    }
};

int main(){
    vector<int> A = {2,7,11,15};

    Solution obj;
    
    vector<int> result = obj.reverseArray(A);
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}