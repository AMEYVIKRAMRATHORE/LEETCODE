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
    int rob(vector<int>& nums) {
      dp.resize(105,-1);
      return ftd(nums,0); 
    }
};