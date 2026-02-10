class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())
        return false;
        int n = matrix.size();//row
        int m = matrix[0].size();//cloumn
        int lo = 0;
        int hi = (n*m) -1;
        while(lo <= hi)
        {
            int mid = (lo+(hi-lo)/2);
            //here % for column and / for row
            if(matrix[mid/m][mid%m] == target)
            return true;
            else if(matrix[mid/m][mid%m] < target)
             lo = mid+1;  
            else
            hi = mid -1;
           
        }
        return false;
        
    }
};