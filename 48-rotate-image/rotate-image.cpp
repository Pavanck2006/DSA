/*class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int col=0;
        vector<vector<int>>ans(m,vector<int>(m));
        for(int i=0;i<m;i++)
        { 
            for(int j=0;j<m;j++)
            {
                ans[i][j]=matrix[m - 1 - j][i];
               
            }
            
        }
        matrix = ans;
        
    }
};*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int col = 0;
        vector<vector<int>> ans(m, vector<int>(m));

        for(int i = 0; i < m; i++)
        {
            int j = m - 1;
            col = 0;

            while(j >= 0 && col < m)
            {
                ans[i][col] = matrix[j][i];
                j--;
                col++;
            }
        }

        matrix = ans;
    }
};