class Solution {
public:
    string largestOddNumber(string num) {
       while(num.length()>0&&(num[num.length()-1]-'0')%2==0)
       num.erase(num.length()-1,1);
       return num;   
    }
};