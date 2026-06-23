class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int res=0;
        unordered_set<char> c;
        for(int r=0;r<s.size();r++){
            while(c.count(s[r])){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            res=max(res,r-l+1);
        }return res;
    }
};
