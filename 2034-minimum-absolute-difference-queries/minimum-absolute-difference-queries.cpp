class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
       
        int n = nums.size();
        
        vector<vector<int>> prefix(n + 1, vector<int>(101, 0));
        
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1];
            prefix[i][nums[i - 1]]++;
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            int prev = -1;
            int mindiff = INT_MAX;

            for (int v = 1; v <= 100; v++) {
                int count = prefix[r + 1][v] - prefix[l][v];

                if (count > 0) {
                    if (prev != -1) {
                        mindiff = min(mindiff, v - prev);
                    }
                    prev = v;
                }
            }

            if (mindiff == INT_MAX) ans.push_back(-1);
            else ans.push_back(mindiff);
        }

        return ans;
    }
};
    