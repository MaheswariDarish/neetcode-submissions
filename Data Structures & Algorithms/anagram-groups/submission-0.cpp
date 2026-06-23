class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> col;
        for(int i=0;i<strs.size();i++){
            vector<int>count(26,0);
            for(char c: strs[i]){
                count[c-'a']++;
            }
            string k=to_string(count[0]);
            for(int p=1;p<26;p++){
                k+=','+to_string(count[p]);
            }col[k].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto &p: col){
            res.push_back(p.second);
        }return res;
    }
};
