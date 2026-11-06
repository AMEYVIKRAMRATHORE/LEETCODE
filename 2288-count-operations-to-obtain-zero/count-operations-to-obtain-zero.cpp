class Solution {
public:
int count=0;
    int countOperations(int num1, int num2) {
        while(num1>0 && num2>0){
          if(num1>num2){
            num1=num1-num2;
            count++;}
          else if(num2>num1){
           num2=num2-num1;
           count++;}
        else{
         count++;
         break;
        }
        }
        return count;
    }
};