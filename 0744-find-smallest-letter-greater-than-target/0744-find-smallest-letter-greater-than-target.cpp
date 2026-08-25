class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        tolower(target);
        for(int i=0;i<letters.size();i++){
            tolower(letters[i]);
            if(letters[i]>target)
            return letters[i];
        }
        return letters[0];
    }
};