class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > max)
            max = nums[i];
        }
        int moves =0;
        for(int i=0;i<nums.size();i++)
        {
            moves += abs(max-nums[i]);
        }
        return moves;
    }
};