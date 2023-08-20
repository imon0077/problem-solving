#include <iostream>
using namespace std;

void permute(string &s, int start, int end){
    if(start == end){
        cout << s << endl;
    }

    for(int i = start; i <= end; i++){
        swap(s[start], s[i]);

        permute(s, start + 1, end);

        swap(s[start], s[i]);
    }
}
     
int main() {
     string s = "";
     cin >> s;
     int n = s.size();

     permute(s, 0, n - 1);

    return 0;
}