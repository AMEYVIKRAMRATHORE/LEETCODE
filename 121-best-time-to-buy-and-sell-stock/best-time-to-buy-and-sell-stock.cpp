class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min=INT_MAX;
     int profit=0;
     int n=prices.size()-1;
     for(int i=0;i<=n;i++){
        if(prices[i]<min){
        min=prices[i];
        }
        if(prices[i]-min>profit){
         profit=prices[i]-min;
     }
    }
    return profit;
    }
};