#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareIntervals(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

int findMaxDisjointIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), compareIntervals);

    int n = intervals.size();
    int count = 1; 
    int end = intervals[0][1];

    for (int i = 1; i < n; ++i) {
        if (intervals[i][0] > end) {
            count++;
            end = intervals[i][1];
        }
    }

    return count;
}

int main() {
    vector<vector<int>> intervals = {{1, 4}, {2, 3}, {4, 6}, {8, 9}};

    int maxDisjointIntervals = findMaxDisjointIntervals(intervals);
    cout << "Length of maximal set of mutually disjoint intervals: " << maxDisjointIntervals << endl;

    return 0;
}
