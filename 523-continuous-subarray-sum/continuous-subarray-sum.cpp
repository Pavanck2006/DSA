class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_map<int,int>first;
       int prefix = 0;
       first[0]=0;
       for(int i=0;i<n;i++)
       {
        prefix = (prefix+nums[i])%k;
        if(first.find(prefix) != first.end())
        {
        if((i+1-first[prefix])>=2)
        return true;
       }
        else
        first[prefix] = i+1;
       }
       return false;
    }
};