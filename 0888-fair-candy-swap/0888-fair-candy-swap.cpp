class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int CA=0, CB=0;
        vector<int> result;
        for(int i=0;i<aliceSizes.size();i++)
        CA+=aliceSizes[i];
        for(int i=0;i<bobSizes.size();i++)
        CB+=bobSizes[i];
        for(int i=0;i<aliceSizes.size();i++){
            for(int j=0;j<bobSizes.size();j++){
                if((CA-aliceSizes[i]+bobSizes[j])==
                (CB-bobSizes[j]+aliceSizes[i])){
                    result.push_back(aliceSizes[i]);
                    result.push_back(bobSizes[j]);
                    return result;
                }
            }
        }
        return {};
    }
};