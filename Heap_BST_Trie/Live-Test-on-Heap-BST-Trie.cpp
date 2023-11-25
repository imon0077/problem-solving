#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    auto compare = [&](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second; 
    };
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(compare)> pq(compare);

    for (const auto& pair : frequencyMap) {
        pq.push(pair);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    std::vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top().first);
        pq.pop();
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    std::vector<int> result = topKFrequent(nums, k);

    std::cout << "Frequent elements are: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
Time Complexity:

The loop to count the frequency of each element takes O(n), where n is the size of the input array.
Constructing the priority queue takes O(u * log k) time, where u is the number of unique elements and k is the value provided.
Retrieving the k most frequent elements from the priority queue takes O(k * log k) time.
Overall, the time complexity is O(n + u * log k), where n is the size of the input array and u is the number of unique elements.

Space Complexity: O(n + k).
*/