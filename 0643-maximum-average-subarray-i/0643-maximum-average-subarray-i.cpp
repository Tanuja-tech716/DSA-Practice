class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg,sum=0;
        for(int i=0;i<k;i++)
        sum+=nums[i];
        maxAvg=sum/k;
        int l=0, r=k;
        while((r<nums.size())&&(l<r)){
            sum-=nums[l];
            sum+=nums[r];
            if(maxAvg<(sum/k))
            maxAvg=(sum/k);
            l++;
            r++;
        }
        return maxAvg;
    }
};