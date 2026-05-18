class Solution {
public:
       
 void Recursion(int idex,vector<int>& ans,vector<int>& nums, vector<vector<int>>& result)
        {
           /* if(idex==n)
            {
                   result.push_back(ans);
                return;

            }
            Recursion(idex+1,ans,nums,result,n);
            ans.push_back(nums[idex]);
            Recursion(idex+1,ans,nums,result,n);
            ans.pop_back();*/
             result.push_back(ans);

        for(int i = idex; i < nums.size(); i++)
        {
            // choose element
            // if do not need dupplicate subset if you add the if loop 
            //if(i>idex && nums[i]==nums[i-1])
            //continue;
            ans.push_back(nums[i]);

            // recursive call
            Recursion(i + 1, ans,nums, result);

            // backtrack
            ans.pop_back();
        }
            
        }
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<int>ans;
        vector<vector<int>> result;
         Recursion(0, ans,nums,result);
         return result;
    }
};