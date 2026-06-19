class Solution {
public:

    int largestRectangleArea(vector<int>& heights)
    {
        stack<int> s;
        int maxArea = 0;
        int n = heights.size();

        for(int i=0;i<=n;i++)
        {
            int curr = (i==n)?0:heights[i];

            while(!s.empty() && heights[s.top()] >= curr)
            {
                int h = heights[s.top()];
                s.pop();

                int width;

                if(s.empty())
                    width = i;
                else
                    width = i - s.top() - 1;

                maxArea = max(maxArea, h*width);
            }

            s.push(i);
        }

        return maxArea;
    }


    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> height(m,0);

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                    height[j]++;
                else
                    height[j]=0;
            }

            ans=max(ans, largestRectangleArea(height));
        }

        return ans;
    }
};