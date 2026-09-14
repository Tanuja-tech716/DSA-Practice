class Solution {
public:
    string removeKdigits(string num, int k) {
        int count=0, i=0;
        string s;
        while(i<num.length()){
        while((!(s.length()==0)&&s.back()>num[i])&&count<k){
            s.pop_back();
            count++;
        }
        s.push_back(num[i]);
        i++;
        }
        while(count<k){
            s.pop_back();
            count++;
        }
        while(s.length()>0&&s[0]=='0'){
            s.erase(0,1);
        }
        if(s.size()==0)
        s="0";
        return s;
    }
};