class Solution {
public:
void helper(vector<int>&arr,int i){
    int n=arr.size()-1;
    if(i<0) return;
    if(arr[i]<9){
         arr[i]++ ;
         return;
    }
    if (arr[i] == 9) {
            arr[i] = 0;
            helper(arr, i - 1);
        }
}
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        helper(digits,n);
        if(digits[0]==0){
        vector<int>a(n+2,0);
        a[0]=1;
        return a;
    }
    return digits;
    }
};