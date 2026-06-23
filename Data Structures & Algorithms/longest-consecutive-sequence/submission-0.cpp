class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : nums) {
          
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (s.find(currentNum + 1) != s.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longest = max(longest, currentStreak);
            }
        }

        return longest;
    }
};