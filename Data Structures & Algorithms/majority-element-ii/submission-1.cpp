class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        int numsmajority=nums.size()/3;
        int streak=0;
        vector<int>res;
        for(int n:nums){
            if(curr==n){
                streak++;
                if(streak==numsmajority+1){
                    res.push_back(n);
                }
            }
            else{
                curr=n;
                streak=1;
                if(streak==numsmajority+1){
                    res.push_back(n);
                }
            }
        }return res;
    }
};