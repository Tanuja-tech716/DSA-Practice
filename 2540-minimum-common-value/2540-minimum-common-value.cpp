class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common=INT_MAX,i=0, j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                if(nums1[i]<common)
                common=nums1[i];
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            i++;
            else
            j++;
        }
        return (common==INT_MAX)?-1:common;
    }
};