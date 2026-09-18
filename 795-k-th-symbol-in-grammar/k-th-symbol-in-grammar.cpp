class Solution {
public:
    int kthGrammar(int n, int k) {
       if(n==1) return 0;
       if(k%2==0){
        int ans=kthGrammar(n-1,k/2);
        if(ans==0) return 1;
        else return 0;
       }
       if(k%2!=0){
        int prev=kthGrammar(n-1, (k/2)+1);
        return prev;
       }
return 0;
    }
}; 