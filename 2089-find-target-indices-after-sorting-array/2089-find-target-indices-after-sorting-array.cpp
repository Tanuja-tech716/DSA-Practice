class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> targetindices{};
        int starting=0, equals=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target)
            starting++;
            else if(nums[i]==target)
            equals++;
        }
        for(int i=0;i<equals;i++)
        targetindices.push_back(starting+i);
        return targetindices;
    }
};