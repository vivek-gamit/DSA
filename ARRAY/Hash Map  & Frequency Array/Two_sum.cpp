#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int compliment = target - nums[i];

        if(mp.find(compliment) != mp.end()){
            return {mp[compliment], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl; // Output: 0 1
}
