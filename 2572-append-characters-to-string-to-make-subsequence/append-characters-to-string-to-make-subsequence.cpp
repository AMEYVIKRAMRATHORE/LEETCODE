class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0,count=0;
        int n1=s.length();
        int n2=t.length();
        while(i<n1 && j<n2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
              while(j < n2) {
            s += t[j];
            j++;
            count++;
        }
        return count;
    }
};