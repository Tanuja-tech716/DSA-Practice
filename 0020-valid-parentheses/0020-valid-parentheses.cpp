class Solution {
public:
    bool isValid(string s) {
        string STACK;
        int top=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            STACK.push_back(s[i]);
            else{
                if(STACK.empty())
                return false;
                char c=STACK.back();
                STACK.pop_back();
                if((s[i]==')'&&c!='(')||(s[i]==']'&&c!='[')||(s[i]=='}'&&c!='{'))
                return false;
            }
        }
        if(STACK.empty())
        return true;
        return false;
    }
};