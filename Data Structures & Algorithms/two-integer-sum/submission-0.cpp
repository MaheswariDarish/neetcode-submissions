class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complement;
        for(int i=0;i<nums.size();i++){
            if(complement.find(target-nums[i])!=complement.end()){
                return {complement[target-nums[i]],i};
            }
            complement[nums[i]]=i;
        }
    }
};
