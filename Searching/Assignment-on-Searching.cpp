#include <iostream>
#include <vector>

int findMin(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is greater than the rightmost element
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return nums[left];
}

int main() {
    // std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    std::vector<int> nums = {11,13,15,17}; 
    int minElement = findMin(nums);
    std::cout << "The minimum element is: " << minElement << std::endl;

    return 0;
}