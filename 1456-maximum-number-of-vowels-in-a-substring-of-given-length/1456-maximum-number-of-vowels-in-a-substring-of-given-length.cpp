class Solution {
public:
    int maxVowels(string s, int k) {
     int len=0, maxlen;
     for(int i=0;i<k;i++){
        if((s[i]=='a'||s[i]=='A')||(s[i]=='e'||s[i]=='E')||(s[i]=='i'||s[i]=='I')||(s[i]=='o'||s[i]=='O')||(s[i]=='u'||s[i]=='U'))
        len++;
     }
     maxlen=len;
     int l=0, r=k;
     while(r<s.length()){
        if((s[l]=='a'||s[l]=='A')||(s[l]=='e'||s[l]=='E')||(s[l]=='i'||s[l]=='I')||(s[l]=='o'||s[l]=='O')||(s[l]=='u'||s[l]=='U'))
        len--;
        if((s[r]=='a'||s[r]=='A')||(s[r]=='e'||s[r]=='E')||(s[r]=='i'||s[r]=='I')||(s[r]=='o'||s[r]=='O')||(s[r]=='u'||s[r]=='U'))
        len++;
        if(len>maxlen)
        maxlen=len;
        l++;
        r++;
     }   
     return maxlen;
    }
};