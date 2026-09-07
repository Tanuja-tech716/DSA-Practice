class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            bool ok=false;
            int l=0, r=nums2.size()-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(nums2[mid]==nums1[i]){
                    ok=true;
                    break;
                }
                else if(nums2[mid]<nums1[i])
                l=mid+1;
                else
                r=mid-1;
            }
            if(ok&&(nums1[i]<common))
            common=nums1[i];
        }
        return (common==INT_MAX)?-1:common;
    }
};