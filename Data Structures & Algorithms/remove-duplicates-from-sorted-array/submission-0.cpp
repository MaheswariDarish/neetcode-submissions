class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            while(i < nums.size() && nums[i-1]==nums[i]){
                i++;
            }
               if(i < nums.size()) {
                nums[k] = nums[i];
                k++;
            }
        }return k;
    }
};