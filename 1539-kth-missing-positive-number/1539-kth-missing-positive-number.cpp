class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int size=0,p=1, i=0;
        while(i<arr.size()){
            if(arr[i]!=p){
                size++;
                if(size==k)
                return p;
            }
            else{
                i++;
            }
            p++;
        }
        while((size+1)<k){
            p++;
            size++;
        }
        return p;
    }
};