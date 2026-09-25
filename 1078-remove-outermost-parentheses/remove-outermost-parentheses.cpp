class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string str;
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' ){
                if(count>0)
               str+=s[i]; 
               count++; 
        }
         else
         {
            count--;
            if(count>0)
            str+=s[i];
         }
    }
     return str;
    }
};