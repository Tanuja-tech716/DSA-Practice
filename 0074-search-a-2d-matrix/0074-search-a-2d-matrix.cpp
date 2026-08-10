class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int i,j,r=matrix.size(),c=matrix[0].size(),mid;
     i=0, j=r-1;
     while(i<=j){
        mid=i+(j-i)/2;
        if(target<matrix[mid][0])
        j=mid-1;
        else if(target>matrix[mid][c-1])
        i=mid+1;
        else
        break;
     }
     if(j<i)
     return false;
     int k=mid;
     i=0, j=c-1;
     while(i<=j){
        int mid=i+(j-i)/2;
        if(target==matrix[k][mid])
        return true;
        else if(target>matrix[k][mid])
        i=mid+1;
        else
        j=mid-1;
     }
     return false;
    }
};