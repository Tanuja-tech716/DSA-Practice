class Solution {
public:
    int arrangeCoins(int n) {
        int validSteps=0, i=1;
      while(i){
        if(n>=i){
        validSteps++;
        n-=i;
        i++;
        }
        else
        break;
      } 
      return validSteps;  
    }
};