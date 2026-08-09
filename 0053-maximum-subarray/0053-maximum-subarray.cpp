class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
             if((sum+nums[i])>=nums[i])
             sum+=nums[i];
             else
             sum=nums[i];
             if(sum>maxsum)
             maxsum=sum;
        }
        return maxsum;
    }
};