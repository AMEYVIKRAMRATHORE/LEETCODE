class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int count=0;
        string ans=strs[0];
        for(int i=1;i<n;i++){
            int j=0;
            while(j<strs[i].size() && j<ans.size() && ans[j]==strs[i][j] ){
                    j++;
                }
            ans=ans.substr(0,j);
        }
        return ans;
    }
};