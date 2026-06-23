class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<vector<int>>res;
        for(int n: nums){
            m[n]++;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            m[nums[i]]--;
            if(i>0 && nums[i]==nums[i-1]){continue;}
            for(int j=i+1;j<nums.size();j++){
                m[nums[j]]--;
                if(j>i+1 && nums[j]==nums[j-1]){continue;}
                int target=-(nums[i]+nums[j]);
                if(m[target]>0){
                    res.push_back({nums[i],nums[j],target});
                }
            }
            for(int j=i+1;j<nums.size();j++){
                m[nums[j]]++;
            }
        }return res;
    }
};
