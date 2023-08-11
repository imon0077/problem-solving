#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size(), j = 0;
        for(int i = 1; i < n; i++){
            if(s[i] == s[j]){
                
            }
        }
    }
};

int main(){
    //vector<char> A = {'Hello'};

    //Solution obj;
    
    //obj.reverseString(A);
    
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }

    string Test =  "Hello", temp;
    int n = Test.size(), j;
    //j = n-1;

    for (int i = 0, j = n-1; i<n/2; i++, j--){
        temp = Test[i];
        Test[i] = Test[j];
        Test[j] = temp;
        //cout << Test[i] << " ";
       
        cout << Test[j] << " ";
        
    }
    return 0;
}