class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int maxF=0;
       unordered_map<int,int>mp;
       for(int p : nums)
       {
        mp[p]++;
       }
       for(auto it:mp)
       {
        if(it.second>nums.size()/2)
       return it.first;
       
       /* if(it.second>maxF)
        {
            maxF = it.second;
            ans = it.first;
        }*/
       }
       return -1;
      //return ans;
    }
};