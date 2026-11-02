class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target = nums[nums.size()/2];
        int moves =0;
        for(int num : nums)
        {
            moves += abs(num - target);
        }
        return moves;
    }
};