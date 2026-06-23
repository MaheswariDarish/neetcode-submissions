class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>suf(nums.size());
        vector<int>pre(nums.size());
        vector<int>res(nums.size());
        pre[0]=1;
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        suf[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
            suf[i]=suf[i+1]*nums[i+1];
        }for(int i=0;i<nums.size();i++){
            res[i]=suf[i]*pre[i];
        }return res;
    }
};
