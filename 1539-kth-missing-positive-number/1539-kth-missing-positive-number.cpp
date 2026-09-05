class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> not_found;
        int p=1, i=0;
        while(i<arr.size()){
            if(arr[i]!=p){
                not_found.push_back(p);
            }
            else{
                i++;
            }
            p++;
        }
        if(not_found.size()<k){
            for(int i=0;i<k;i++){
                not_found.push_back(p++);
            }
        }
        return not_found[k-1];
    }
};