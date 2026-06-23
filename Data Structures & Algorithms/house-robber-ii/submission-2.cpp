class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int rob1=0,rob2=0;
        for(int i=1;i<nums.size();i++){
            int temp=max(rob1+nums[i],rob2);
            rob1=rob2;
            rob2=temp;
        }
        int max1=rob2;
        rob2=0;
        rob1=0;
         for(int i=0;i<nums.size()-1;i++){
            int temp=max(rob1+nums[i],rob2);
            rob1=rob2;
            rob2=temp;
        }
        return max(max1,rob2);
    }
};
