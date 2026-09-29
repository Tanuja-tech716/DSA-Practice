class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.length())
        return "0";
        string result;
        for(char c: num){
            while(k>0&&result.length()!=0&&(result.back()-'0')>(c-'0')){
                result.pop_back();
                k--;
            }
            result.push_back(c);
        }
        if(k>0){
            while(k>0){
                result.pop_back();
                k--;
            }
        }
        while(result[0]=='0')
        result.erase(0,1);
        if(result.length()==0)
        return "0";
        else
        return result;
    }
};