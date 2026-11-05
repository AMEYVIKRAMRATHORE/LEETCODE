class Solution {
public:
vector<int>dp;
int f(vector<int>&arr,int i){
    if(i==arr.size()-1) return arr[i];
    if(i==arr.size()-2) return max(arr[i],arr[i+1]);
    int take=arr[i]+f(arr,i+2);
    int dtake=0+f(arr,i+1);
    return max(take,dtake);

}
int ftd(vector<int>&arr,int i){
    if(i==arr.size()-1) return arr[i];
    if(i==arr.size()-2) return max(arr[i],arr[i+1]);
    if(dp[i]!=-1) return dp[i];
    int take=arr[i]+ftd(arr,i+2);
    int dtake=0+ftd(arr,i+1);
    return dp[i]=max(take,dtake);

}
int fbu(vector<int>arr){
    int n=arr.size();
    if(n==1) return arr[0];
    dp.resize(n);
    dp[n-1]=arr[n-1];
    dp[n-2]=max(arr[n-1],arr[n-2]);
     for(int i=n-3;i>=0;i--){
       int take=arr[i]+dp[i+2];
    int dtake=0+dp[i+1]; 
    dp[i]=max(take,dtake);
    }
    return dp[0];
     }

    int rob(vector<int>& nums) {
      dp.resize(105,-1);
      return fbu(nums); 
    }
};