class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        vector<int> visited(nums.size(),0);
        stack<int> s;
        int i=0,count=0;
        while(count<(2*nums.size())){
            while(!(s.empty())&&(nums[i]>nums[s.top()])){
                int prev=s.top();            
                s.pop();
                ans[prev]=nums[i];
            }
            if(!(s.empty())&&s.top()==i)
            s.pop();
            if(visited[i]==0){
                s.push(i);
                visited[i]=1;
            }
            i=(i+1)%(nums.size());
            count++;
        }
        return ans;
    }
};