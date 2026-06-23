class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int maxsofar = nums[0];
    int maxsum = nums[0];
    
    for (size_t i = 1; i < nums.size(); ++i) {
        maxsum = std::max(nums[i], maxsum + nums[i]);
        maxsofar = std::max(maxsofar, maxsum);
    }
    
    return maxsofar;
    }
};
