class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        stack<int> s;
        for(int i=0;i<nums2.size();i++){
            while(!(s.empty())&&(nums2[i]>s.top())){
                int prev=s.top();
                mp[prev]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])==mp.end())
            ans.push_back(-1);
            else
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};