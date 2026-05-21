class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        // check if matrix is empty
        if(mat.empty())
            return {};

        // total rows
        int m = mat.size();

        // total columns
        int n = mat[0].size();

        // vector to store final answer
        vector<int> arr;

        // starting position
        int row = 0;
        int col = 0;

        // direction variable
        // true  -> move upward-right
        // false -> move downward-left
        bool up = true;

        // continue until indices go outside matrix
        while(row < m && col < n)
        {

            // =========================
            // UPWARD DIAGONAL MOVEMENT
            // =========================

            if(up)
            {
                // move upward-right diagonally
                // stop when:
                // 1. first row reached
                // 2. last column reached
                while(row > 0 && col < n - 1)
                {
                    // store current element
                    arr.push_back(mat[row][col]);

                    // move upward
                    row--;

                    // move right
                    col++;
                }

                // add boundary element
                // example:
                // top row element OR last column element
                arr.push_back(mat[row][col]);

                // if last column reached
                // move downward
                if(col == n - 1)
                {
                    row++;
                }

                // otherwise top row reached
                // move right
                else
                {
                    col++;
                }
            }

            // =========================
            // DOWNWARD DIAGONAL MOVEMENT
            // =========================

            else
            {
                // move downward-left diagonally
                // stop when:
                // 1. last row reached
                // 2. first column reached
                while(row < m - 1 && col > 0)
                {
                    // store current element
                    arr.push_back(mat[row][col]);

                    // move downward
                    row++;

                    // move left
                    col--;
                }

                // add boundary element
                // example:
                // last row element OR first column element
                arr.push_back(mat[row][col]);

                // if last row reached
                // move right
                if(row == m - 1)
                {
                    col++;
                }

                // otherwise first column reached
                // move downward
                else
                {
                    row++;
                }
            }

            // change direction
            // upward -> downward
            // downward -> upward
            up = !up;
        }

        // return final diagonal order
        return arr;
    }
};