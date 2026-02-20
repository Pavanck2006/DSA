class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);

        for (int i = 0; i < numRows; i++) {
            ans[i].resize(i + 1);   // each row has (i+1) elements
            ans[i][0] = ans[i][i] = 1; // first and last are always 1

            // fill the internal elements
            for (int j = 1; j < i; j++) {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        return ans;
    }
};
