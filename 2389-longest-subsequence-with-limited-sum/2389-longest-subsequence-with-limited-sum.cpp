class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       vector<int> answer={};
       sort(nums.begin(),nums.end());
       vector<int> prefix(nums.size());
       prefix[0]=nums[0];
       for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]+nums[i];
       }
       for(int i=0;i<queries.size();i++){
        int size=0,l=0, r=prefix.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(prefix[mid]>queries[i])
            r=mid-1;
            else{
                size=mid+1;
                l=mid+1;
            }
        }
        answer.push_back(size);
       } 
       return answer;
    }
};