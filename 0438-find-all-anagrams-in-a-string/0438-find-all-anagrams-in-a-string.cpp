class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      unordered_map<char,int> mp1;
      vector<int> result;
      for(char c:p)
      mp1[c]++;
      int i=0;
      string t=s.substr(0,p.length());
      unordered_map<char,int> mp2;
      for(char c:t)
      mp2[c]++;
      if(mp1==mp2)
      result.push_back(0);
      int l=0, r=p.length();
      while(r<s.length()){
        mp2[s[l]]--;
        if(mp2[s[l]]==0)
        mp2.erase(s[l]);
        mp2[s[r]]++;
        if(mp1==mp2)
        result.push_back(l+1);
        l++;
        r++;
      }  
      return result;
    }
};