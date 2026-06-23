class Solution {
public:
    void helper(vector<int>& nums, int target,int i,vector<vector<int>>& res,vector<int>& sub){
        if(target==0){res.push_back(sub);
        return;}
        if(i>=nums.size() || target<0){return;}
        sub.push_back(nums[i]);
        helper(nums,target-nums[i],i,res,sub);
        sub.pop_back();
        helper(nums,target,i+1,res,sub);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>sub;
        helper(nums,target,0,res,sub);
        return res;
    }
};
