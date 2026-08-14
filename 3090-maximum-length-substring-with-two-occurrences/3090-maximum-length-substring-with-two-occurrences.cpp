class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int j=0, maxlen=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[j]]--;
                j++;
            }
            if((i-j+1)>maxlen)
            maxlen=(i-j+1);
        }
        return maxlen;
    }
};