class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int m=numRows;
        vector<vector<int>>v;
        for(int i=0;i<m;i++){
            vector<int>v1(i+1,0);
            v.push_back(v1);
        for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                v[i][j]=1;
                else
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    return v;
    }
};