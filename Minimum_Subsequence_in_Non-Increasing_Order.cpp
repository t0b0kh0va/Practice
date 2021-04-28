#include <algorithm>
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        int i = 0;
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        int tempSum = 0;
        while (tempSum <= sum - tempSum){
            tempSum += nums[i];
            i++;
        }
        nums.erase(nums.begin()+i, nums.end());
        return nums;
    }
};
