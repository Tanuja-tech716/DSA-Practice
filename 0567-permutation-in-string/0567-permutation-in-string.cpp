class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if(s2.length()<s1.length())
         return false;
         unordered_map<char,int> mp1;
         unordered_map<char,int> mp2;
         for(int i=0;i<s1.length();i++)
         mp1[s1[i]]++;
         for(int i=0;i<s1.length();i++)
         mp2[s2[i]]++;
         if(mp1==mp2)
         return true;
         int l=0, r=s1.length();
         while(r<s2.length()){
            mp2[s2[l]]--;
            if(mp2[s2[l]]==0)
            mp2.erase(s2[l]);
            mp2[s2[r]]++;
            if(mp1==mp2)
            return true;
            l++;
            r++;
         }
         return false;
    }
};