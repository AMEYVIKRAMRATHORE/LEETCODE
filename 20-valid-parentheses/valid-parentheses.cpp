class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        string str="";
        for(int i=0;i<n;i++){
            if( s[i]=='('||s[i]=='{'||s[i]=='['){
                str+=s[i];
            }
            else{
                if(str.empty()){
                    return false;
                }
                 if(s[i] == ')' && str.back() != '(')
                    return false;

                if(s[i] == '}' && str.back() != '{')
                    return false;

                if(s[i] == ']' && str.back() != '[')
                    return false;

                str.pop_back();
            }
        }
        return str.empty();
    }
};