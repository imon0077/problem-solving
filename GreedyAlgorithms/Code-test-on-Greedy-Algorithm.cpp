#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareByUnit(vector<int>& box1, vector<int>& box2) {
    return box1[1] > box2[1];
}

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(), boxTypes.end(), compareByUnit);

    int maxUnits = 0;
    int i = 0;

    while (truckSize > 0 && i < boxTypes.size()) {
        int boxes = min(truckSize, boxTypes[i][0]);
        maxUnits += boxes * boxTypes[i][1];
        truckSize -= boxes;
        i++;
    }

    return maxUnits;
}

int main() {
    vector<vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};
    int truckSize = 4; 

    int result = maximumUnits(boxTypes, truckSize);
    cout << "Maximum total number of units: " << result << endl;

    return 0;
}

// Time complexity of the solution is O(n*log(n))
// Space complexity is O(1) 