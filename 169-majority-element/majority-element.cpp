class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0;
        int count=0;
       unordered_map<int,int>mp;
       for(int p : nums)
       {
        mp[p]++;
       }
       for(auto it:mp)
       if(it.second>nums.size()/2)
       return it.first;
       return -1;
    }
};