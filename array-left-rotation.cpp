#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> rotateLeft(int d, vector<int>& a) {
        int N = a.size();
        vector<int> b = {};
        for (int i = d; i < N; i++){
            b.push_back(a[i]);
        }

        for (int i = 0; i < d; i++)
        {
           b.push_back(a[i]);
        }
        
        return b;
    }
};

int main(){
    vector<int> A = {1, 2, 3, 4, 5,};
    int d = 4;

    Solution obj;
    
    vector<int> result = obj.rotateLeft(d, A);
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}