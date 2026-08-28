class Solution {
    public boolean canPartition(int[] nums) {
        int total = 0;
        for(int num : nums)
        {
            total += num;
        }
        int target = total/2;
        if(total%2 != 0)
        {
            return false;
        }
        boolean [] dp = new boolean[target+1];
        dp[0]=true;
        for(int num : nums)
        {
            for(int j = target; j>=num;j--)
            {
                if(dp[j-num])
                {
                    dp[j]=true;
                }
            }
        }
        return dp[target];

    }
}