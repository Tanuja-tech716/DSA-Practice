class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int op=0, minop=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')
            op++;
        }
        minop=op;
        int l=0, r=k;
        while(r<blocks.length()){
            if(blocks[l]=='W')
            op--;
            if(blocks[r]=='W')
            op++;
            if(op<minop)
            minop=op;
            l++;
            r++;
        }
        return minop;
    }
};