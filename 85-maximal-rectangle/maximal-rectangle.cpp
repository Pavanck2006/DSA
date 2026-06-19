class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> height(m,0);
        int ans = 0;


        for(int i=0;i<n;i++)
        {
            // Step 1: Convert row into histogram
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                {
                    height[j]++;
                }
                else
                {
                    height[j]=0;
                }
            }


            // Step 2: Find largest rectangle in histogram
            for(int j=0;j<m;j++)
            {
                int minHeight = height[j];

                for(int k=j;k<m;k++)
                {
                    minHeight = min(minHeight,height[k]);

                    int width = k-j+1;

                    int area = minHeight * width;

                    ans = max(ans,area);
                }
            }
        }

        return ans;
    }
};