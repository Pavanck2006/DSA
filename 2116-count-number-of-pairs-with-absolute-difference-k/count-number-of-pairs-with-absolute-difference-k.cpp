class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j<n)
            {
                if(nums[i]-nums[j]==k || nums[i]-nums[j]==-k)
                {
                     count++;
                }
                j++;
            }
        }
        return count;
    }
};