class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
       for( i=0;i<nums.size();i++)
       {
        if(nums[i]==target)
        break; 
       }
       int j=0;
       while(i==nums.size() && j<nums.size() )
       {
        if(nums[j]<target)
        {
         j++;
         continue;
        }
        else
        return j;
        break;
       }
       return i;
    }
};