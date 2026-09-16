class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans,temp;
        stack<char> st;
        int i=0, j=0;
        while(i<s.length()&&j<s.length()){
            if(s[j]=='('||s[j]=='['||s[j]=='{')
            st.push(s[j]);
            else{
                st.pop();
            }
            if(st.empty()){
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