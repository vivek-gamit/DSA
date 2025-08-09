//Given an integer array nums and an integer k, return the total number of continuous subarrays whose sum equals to k.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1; // For subarrays starting at index 0

    int prefixSum = 0, count = 0;

    for (int num : nums) {
        prefixSum += num;

        // If there exists a prefix sum that is (currentSum - k), we found a subarray
        if (prefixCount.find(prefixSum - k) != prefixCount.end()) {
            count += prefixCount[prefixSum - k];
        }

        // Store the current prefix sum in the map
        prefixCount[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout << subarraySum(nums, k) << endl; // Output: 2
    return 0;
}
