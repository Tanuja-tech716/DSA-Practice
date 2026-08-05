class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0, c=0;
        for(int i=0;i<k;i++)
        sum+=arr[i];
        int l=0, r=k;
        if((sum/k)>=threshold)
        c++;
        while(r<arr.size()){
           sum-=arr[l];
           sum+=arr[r];
           if((sum/k)>=threshold)
           c++;
           l++;
           r++;
        }
        return c;
    }
};