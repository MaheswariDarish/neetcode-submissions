class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>pick(nums.size(),false);
        vector<vector<int>>res;
        vector<int>sub;
        helper(nums,res,pick,sub);
        return res;
    }
    void helper(vector<int>& nums,vector<vector<int>>& res,vector<bool>& pick,vector<int>& sub){
        if(nums.size()==sub.size()){
            res.push_back(sub);
            return;}
            for(int i=0;i<nums.size();i++){
                if(!pick[i]){
                    pick[i]=true;
                    sub.push_back(nums[i]);
                    helper(nums,res,pick,sub);
                    sub.pop_back();
                    pick[i]=false;
                }
            }
    }
};
