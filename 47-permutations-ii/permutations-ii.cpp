class Solution {
public:
void Getpermutation(vector<int>& nums,int index,set<vector<int>>&uniqueRows)
{
    if(index==nums.size())
    {
        uniqueRows.insert(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        Getpermutation(nums,index+1,uniqueRows);
        swap(nums[index],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>uniqueRows;
        Getpermutation(nums,0,uniqueRows);
         vector<vector<int>>ans(uniqueRows.begin(),uniqueRows.end());
      return ans;
    }
};