class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>arr;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        while(i<n1 && j<n2){
          if(nums1[i]==nums2[j]){
                if(arr.empty() || arr.back() != nums2[j]){
            arr.push_back(nums2[j]);}
            i++;
            j++;
          }
           else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return arr;
    }
};