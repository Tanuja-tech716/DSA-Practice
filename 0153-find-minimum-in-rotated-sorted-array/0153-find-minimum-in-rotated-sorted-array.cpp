class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r=nums.size()-1, least=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<=least)
            least=nums[mid];
            if(nums[mid]>nums[r])
            l=mid+1;
            else{
                r=mid-1;
            }
        }
        return least;
    }
};