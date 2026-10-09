class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string sub=strs[0];
     int right=sub.size()-1;
     for(string s:strs){
        if (s.size()==0){return "";}
        sub=sub.substr(0,min(s.size(),sub.size()));
        for(int i=0;i<min(s.size(),sub.size());i++){
            if(sub[i]!=s[i]){
                sub=sub.substr(0,i);
                break;
            }
        }
     }return sub;

    }
};