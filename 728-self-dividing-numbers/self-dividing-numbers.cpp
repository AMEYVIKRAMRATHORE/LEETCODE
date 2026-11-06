class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
           vector<int >ans;
            for(int i=left ;i<=right;i++){
                int n=i;
                while(n>0){
                    int j=n%10;
                    if(j==0 || i%j!=0)
                     break;
                     n=n/10;

                }
                if(n==0)
                ans.push_back(i);
            }
        return ans;
            
    }
};