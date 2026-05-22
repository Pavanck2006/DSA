class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int row = 0;
        int col = 0;
        int sum = 0;

        while(col < m && row < n)
        {
            if(m % 2 == 0)//for even number row and column
            {
                while(col < m && row < n)
                {
                    sum += mat[row][col];
                    row++;
                    col++;
                }
                row = 0;
                col = n - 1;
                while(col >= 0 && row < n)
                {
                    sum += mat[row][col];
                    row++;
                    col--;
                }
            }
            else//for odd number column and row
            {
                while(col < m && row < n)
                {
                    sum += mat[row][col];
                    row++;
                    col++;
                }

                row = 0;
                col = n - 1;

                while(col >= 0 && row < n)
                {
                    if(row == col)
                    {
                        row++;
                        col--;
                        continue;
                    }
                    sum += mat[row][col];
                    row++;
                    col--;
                }
            }

            break;
        }

        return sum;
    }
};