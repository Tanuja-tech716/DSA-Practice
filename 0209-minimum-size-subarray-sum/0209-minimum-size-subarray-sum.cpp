class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, minSize= INT_MAX , size=0;
        int i,j=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                if(minSize>(i-j+1))
                 minSize=(i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        return (minSize==INT_MAX)?0:minSize;
    }
};