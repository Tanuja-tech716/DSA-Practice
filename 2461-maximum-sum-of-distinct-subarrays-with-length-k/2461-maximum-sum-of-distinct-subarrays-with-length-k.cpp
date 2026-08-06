class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0, maxsum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()==k)
        maxsum=sum;
        int l=0, r=k;
        while(r<nums.size()){
          sum-=nums[l];
          mp[nums[l]]--;
          if(mp[nums[l]]==0)
          mp.erase(nums[l]);
          sum+=nums[r];
          mp[nums[r]]++;
          if(mp.size()==k){
            if(sum>maxsum)
            maxsum=sum;
          }
          l++;
          r++;
        }
        return maxsum;
    }
};