#include <algorithm>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());   
        return nums[n - k];  
        /*for(int i = 0; i < n; i++) {
            if(i == n - k) {
                return nums[i];
            }
        }

        return -1;
          */
    }
};