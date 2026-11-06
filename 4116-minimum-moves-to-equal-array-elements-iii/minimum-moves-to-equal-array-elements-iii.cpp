class Solution {
public:
        int count=0;
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        for(int i=0;i<n;i++){
           count= count +(nums[n]-nums[i]);
        }
        return count;
    }
};