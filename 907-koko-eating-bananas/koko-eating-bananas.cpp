class Solution {
public:
bool check(int speed,vector<int>& piles, int h){
    int count=0,n=piles.size();
    for(int i=0;i<n;i++){
        if(count>h) return false;
        if(speed>piles[i]) count++;
        else if(piles[i]%speed==0) count+=piles[i]/speed;
        else count+=piles[i]/speed +1;
    }
    if(count<=h)return true;
    else
    return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,piles[i]);
        }
        int l=1;
        int high=mx;
        int ans=-1;
        while(l<=high){
            int mid=(l+high)/2;
        if(check(mid,piles,h)==true){
             ans=mid;
             high=mid-1;
        }
        else l=mid+1;
        }
        return ans;
    }
};