#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string a = "11", b = "10", result = "";

    reverse(a.begin(), a.end()); 
    reverse(b.begin(), b.end());

    int aLen = a.size(), bLen = b.size(), carry = 0, i = 0, sum;

    while (i < aLen || i < bLen)
    {
        sum = carry;
        if(i < aLen)
            sum = sum + (a[i] - '0');
        if(i < bLen)
            sum = sum + (b[i] - '0');


        if(sum == 0){
            carry = 0; 
            result += '0';
        }
        else if(sum == 1){
            carry = 0; 
            result += '1';
        }
        else if(sum == 2){
            carry = 1; 
            result += '0';
        }
        else{
            carry = 1; 
            result += '1';
        }

        i++;
    }

    if(carry == 1){
        result += '1';
    }
    
    reverse(result.begin(), result.end());

    cout << "\n " << result;

    return 0;
}