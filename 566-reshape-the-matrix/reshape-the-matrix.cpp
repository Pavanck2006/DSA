class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=0;
        int col=0;
        //vector<vector<int>>ans(r, vector<int>(c));
        vector<vector<int>>ans;
        vector<int>temp;

    if(mat.size()*mat[0].size()!=r*c)
    return mat;
    for(int i=0;i<mat.size();i++)
      {
        for(int j=0;j<mat[0].size();j++)
        {     
            temp.push_back(mat[i][j]);
            if(temp.size()==c)
            {
                ans.push_back(temp);
                temp.clear();
            }
            /*ans[row][col]=mat[i][j];
            col++;
            if(col==c)
            {
                col=0;
                row++;
            }*/
            
        }
      }
    
    return ans;
    }
};