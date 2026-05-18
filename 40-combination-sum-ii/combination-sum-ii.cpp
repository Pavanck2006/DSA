class Solution {
public:
void subsequence(int index,vector<int>&ans,vector<vector<int>>&result,vector<int>& candidates,int target)
{
     if(target==0)
     {
        result.push_back(ans);
     }
    for(int i=index;i<candidates.size();i++)
    {
         if(candidates[i] > target)
          break;

       if(i>index && candidates[i]==candidates[i-1])//skipping dupplicate combinations
       continue;
      
        ans.push_back(candidates[i]);
        subsequence(i+1,ans,result,candidates,target-candidates[i]);
        ans.pop_back();//back track
    }
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>ans;
         subsequence(0,ans,result,candidates,target);
    return result;
    }
};