class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0,m;
        while(n>0){
         m=n%10;
         product=product*m;
         sum=sum+m;
         n=n/10;
        }
        return product-sum;
    }
};