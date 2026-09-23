class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;int j=1;
        int n=nums.size();
        bool inc=true;
        bool dec=true;
        while(j<n){
            if(nums[i]>nums[j]){
               inc=false;
            } 
            else if(nums[i]<nums[j]){
               dec=false;
            }
           i++;
           j++;  
        }
        return inc || dec;
    }
};