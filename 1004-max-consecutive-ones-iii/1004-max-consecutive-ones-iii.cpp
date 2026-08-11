class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int c1=0, c0=0, maxcon1=0,j=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1)
        c1++;
        else
        c0++;
            while(c0>k){
                if(nums[j]==1)
                c1--;
                else
                c0--;
                j++;
            }
        if((c1+c0)>maxcon1)
        maxcon1=(c1+c0);
       }   
       return maxcon1;
    }
};