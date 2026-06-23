class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1){
            return {-1};
        }
        int n=arr.size();
        int lastel=-1;
        int curr=0;
        for(int i=n-1;i>=0;i--){
            curr=arr[i];
            arr[i]=lastel;
            lastel=max(lastel,curr);
    }return arr;}
};