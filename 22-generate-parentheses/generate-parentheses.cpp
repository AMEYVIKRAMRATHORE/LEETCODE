class Solution {
public:
    void helper(vector<string>& ans, string str, int op, int cl, int n){
      if(str.length()==2*n){
        ans.push_back(str);
        return;
      }
      if(op<n) helper(ans,str+'(',op+1,cl,n);
      if(cl<op) helper(ans,str+')',op,cl+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int op = 0;
        int cl = 0;
        helper(ans,"", op,cl,n);
        return ans;
    }
};