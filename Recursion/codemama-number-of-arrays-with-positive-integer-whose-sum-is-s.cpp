#include <iostream>
#include <vector>
using namespace std;

void generateArrays(vector<int>& current, int sum) {
    int countArray = 0;
    if (sum == 0) {
        for (int num : current) {
            countArray ++;
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= sum; ++i) {
        //if (current.empty() || i <= current.back()) {

            current.push_back(i);

            generateArrays(current, sum - i);

            current.pop_back();
        //}
    }
}

int main() {
    int S;
    cin >> S;

    vector<int> current;
    //current.push_back(S); // Consider S itself as an array

    cout << "Arrays with elements sum " << S << ":\n";
    generateArrays(current, S);

    return 0;
}
