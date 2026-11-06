class Solution {
public:
int distance=0;
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {https://leetcode.com/_next/static/media/dark-pending.1t5jt28i65f5e.gif$0
        for(int i=0;i<=arr1.size()-1;i++){
            int flag=0;
            for(int j=0;j<=arr2.size()-1;j++){
                 if(abs(arr1[i]-arr2[j])<=d){
                    flag=1;
                    break;
                 }
            }
             if(flag==0)
             distance++;
        }
        return distance;
    }
};