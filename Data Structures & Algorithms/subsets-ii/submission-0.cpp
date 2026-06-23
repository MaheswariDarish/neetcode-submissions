class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        vector<int>sub;
        backtrack(nums,0,res,sub);
        return res;
    }
   void backtrack(vector<int>& nums,int i,vector<vector<int>>& res,vector<int>& sub){
    res.push_back(sub);
    for(int j=i;j<nums.size();j++){
        if(j>i && nums[j]==nums[j-1]){
            continue;
        }
         sub.push_back(nums[j]);
        backtrack(nums,j+1,res,sub);
        sub.pop_back();
    }
   
   }
};
