class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min, max;
        min=*min_element(nums.begin(),nums.end());
        max=*max_element(nums.begin(),nums.end());
        vector<int> result;
        for(int i=min+1;i<max;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end())
            result.push_back(i);
        }
        return result;
    }
};