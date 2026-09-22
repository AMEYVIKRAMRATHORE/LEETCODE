class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0,high=n-1;
       int pivot=-1;
       if(n==2){
        if(target==nums[0]) return 0;
        else if(target==nums[1]) return 1;
        else return -1;      
         }
       if(n==1){
        if(target==nums[0]) return 0;
        else return -1;
       }
       while(low<=high){
       int mid=low+(high-low)/2;
       if(mid>0 && mid<n-1){
       if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
          pivot=mid;
          break;
       }
       if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
          pivot=mid+1;
          break;
       }
       }
       if(nums[mid]>nums[high]) low=mid+1;
       else high =mid-1;
       }
               if(pivot == -1) {
            low = 0;
            high = n - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            return -1;
        }
       if (target >= nums[0] && target <= nums[pivot - 1]){
        low=0;
        high=pivot-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
       }
      else{
        low=pivot;
        high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
      }
      return -1;
    }
};