class Solution {
public:
    void substring1(vector<int>&ans,vector<vector<int>>&finalans,vector<int>original,int idx ,bool flag){
       if(original.size()==0){
        finalans.push_back(ans);
        return;
       }
       int ch=original[0];
       if(original.size()==1){
        if(flag==true)
        {       ans.push_back(ch);
                substring1(ans, finalans,vector<int>(original.begin() + 1, original.end()),0, true);
                ans.pop_back();
        }
        substring1(ans, finalans,vector<int>(original.begin() + 1, original.end()),0, true);
        return;
       }
       int dh=original[1];
       if(ch==dh){
        if(flag==true){
             ans.push_back(ch);
                substring1(ans, finalans, vector<int>(original.begin() + 1, original.end()),  0, true);
                ans.pop_back();
            }
                  substring1(ans, finalans,vector<int>(original.begin() + 1, original.end()),0, false);
       }
       else{
         if (flag == true) {
                ans.push_back(ch);
                substring1(ans, finalans,vector<int>(original.begin() + 1, original.end()),0, true);
                ans.pop_back();
            }
            substring1(ans, finalans,vector<int>(original.begin() + 1, original.end()), 0, true);
       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int> ans;
        vector<vector<int>> finalans;
        sort(nums.begin(), nums.end());
        substring1(ans,finalans,nums,0,true);
        return finalans;
    }
};