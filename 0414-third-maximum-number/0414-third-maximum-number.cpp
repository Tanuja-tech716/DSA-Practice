class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long l=LLONG_MIN, l2=LLONG_MIN, l3=LLONG_MIN;
        for(int x:nums){
            if(x>l){
                l3=l2;
                l2=l;
                l=x;
            }
            else if(x>l2 && x<l){
                l3=l2;
                l2=x;
            }
            else if(x>l3 && x<l2){
                l3=x;
            }
        }
        return l3==LLONG_MIN?l:l3;
    }
};