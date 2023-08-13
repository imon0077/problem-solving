#include<iostream>
#include<set>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int temp;
        set<int> visited;

        while(true){
            temp = 0;

            while(n > 0){
                temp += pow((n % 10), 2);
                n /= 10;

                // cout << "\n temp : " << temp;
                // cout << " n : " << n;
            }

            n = temp;

            if(n == 1)
                return true;

            if(visited.find(n) != visited.end())
                return false;

            visited.insert(n);            
        }

        return true;
    }
};

int main(){

    Solution obj;

    bool result = obj.isHappy(19);

    cout << " result : " << result;

    return 0;
}