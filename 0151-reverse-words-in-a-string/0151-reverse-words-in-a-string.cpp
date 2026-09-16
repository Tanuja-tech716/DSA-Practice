class Solution {
public:
    string reverseWords(string s) {
        string ans;
        s=' '+s;
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(!isspace(s[i])){
                ans.push_back(s[i]);
                count++;
            }
            else if(isspace(s[i])){
                if(count==0)
                continue;
                for(int j=ans.length()-count,k=ans.length()-1;j<=k;j++,k--){
                    char t=ans[j];
                    ans[j]=ans[k];
                    ans[k]=t;
                }
                ans.push_back(s[i]);
                count=0;
            }
        }
        while(ans[0]==' ')
        ans.erase(0,1);
        while(ans[ans.length()-1]==' ')
        ans.erase(ans.length()-1,1);
        return ans;
    }
};