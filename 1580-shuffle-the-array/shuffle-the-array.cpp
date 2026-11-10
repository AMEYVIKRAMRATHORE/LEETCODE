class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n;
        int m =nums.size()-1;
          vector<int>a(2*n,0);
          for(int k=0;k<n;k++){
          a[2*k]=(nums[i]);
          a[2*k+1]=(nums[j]);
          i++;
          j++;
            }
            return a;
    }
};