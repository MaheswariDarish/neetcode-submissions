class Solution {
public:
    bool rec(string &s,string &t,int i,int j,vector<vector<int>> &mp){
        if(s.size()==i){
            return true;
        }
        if(j==t.size()){
            return false;
        }
        if(mp[i][j]!=-1){
            return mp[i][j]==1;
        }
        if(s[i]==t[j]){
            mp[i][j]= rec(s,t,i+1,j+1,mp)?1:0;
        }else{
            mp[i][j]=rec(s,t,i,j+1,mp)?1:0;
        }
        return mp[i][j]==1;
    }
    bool isSubsequence(string s, string t) {
        vector<vector<int>>mp(s.size(),vector<int>(t.size(),-1));
        return rec(s,t,0,0,mp);
    }
};