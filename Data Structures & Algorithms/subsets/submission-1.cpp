class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        vector<vector<int>>res;
        helper(0,sub,res,nums);
        return res;
    }
    void helper(int j,vector<int>& sub,vector<vector<int>>&res,vector<int>& nums){
        res.push_back(sub);
        for(int i=j;i<nums.size();i++){
            sub.push_back(nums[i]);
            helper(i+1,sub,res,nums);
            sub.pop_back();
        }
    }
};
