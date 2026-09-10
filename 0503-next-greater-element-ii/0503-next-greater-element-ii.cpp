class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=(i+1)%(nums.size());j<nums.size();j=(j+1)%(nums.size())){
                if(j==i){
                    ans.push_back(-1);
                    break;
                }
                else if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    break;
                }
            }
        }
        return ans;
    }
};