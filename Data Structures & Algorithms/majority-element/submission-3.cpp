class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int candidate=nums[0];
        int counter=1;
        for(int i=1;i<nums.size();i++){
            if(candidate!=nums[i]){
                counter--;
            }
           if(counter==0){
                candidate=nums[i];
                counter++;
            }
            else{
                counter++;
            }
        }return candidate;
    }
};