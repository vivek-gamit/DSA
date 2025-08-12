// subarray sum equals to k 
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int>prefreq;
    prefreq[0] = 1;

    int prefixsum = 0;
    int count = 0;
    
    for(int num: nums){
        prefixsum += num;

        if(prefreq.find(prefixsum-k) != prefreq.end()){
            count += prefreq[prefixsum-k];
        }

        prefreq[prefixsum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout << subarraySum(nums, k) << endl; // Output: 2
}
