class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        set<pair<int,int>>ans;
       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
           
            if(i != j &&abs(nums[i]-nums[j])==k )
            {
                ans.insert({min(nums[i],nums[j]),max(nums[i],nums[j])});
            }
        }
       } 
       return ans.size();
    }
};