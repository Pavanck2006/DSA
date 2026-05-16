class Solution {
public:
void recursion(int idex,vector<int>&ans,vector<vector<int>> &result,vector<int>& nums,int n)
{
    
    result.push_back(ans);
        
   for(int i=idex;i<n;i++)
   {
    if(i>idex && nums[i]==nums[i-1])
    continue;
   
    ans.push_back(nums[i]);
    recursion(i+1,ans,result,nums,n);
    ans.pop_back();
   } 
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> result;
        recursion(0,ans,result,nums,nums.size());
        return result;
    }
};