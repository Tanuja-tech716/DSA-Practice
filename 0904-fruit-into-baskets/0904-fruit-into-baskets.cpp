class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()==1)
        return 1;
        unordered_map<int,int> mp;
        int  sum=0,maxf=0, j=0;
        for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]++;
            while(mp.size()>2){
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0)
                mp.erase(fruits[j]);
                j++;
            }
            sum=0;
            for(auto p:mp)
            sum+=p.second;
            if(sum>maxf)
            maxf=sum;
        }
        return maxf;
    }
};