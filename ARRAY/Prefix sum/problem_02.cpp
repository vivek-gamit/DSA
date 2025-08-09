#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);  // 1 extra space for 0 at start

        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);

    cout << obj.sumRange(0, 2) << endl;  // Output: 1
    cout << obj.sumRange(2, 5) << endl;  // Output: -1
    cout << obj.sumRange(0, 5) << endl;  // Output: -3

    return 0;
}
