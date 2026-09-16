class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans,temp;
        int level=0;
        int i=0, j=0;
        while(i<s.length()&&j<s.length()){
            if(s[j]=='(')
            level++;
            else{
                level--;
            }
            if(level==0){
                for(int k=i+1;k<=j-1;k++)
                ans.push_back(s[k]);
                j++;
                i=j;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};