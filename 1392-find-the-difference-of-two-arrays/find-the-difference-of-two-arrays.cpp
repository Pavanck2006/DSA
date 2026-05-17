class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> s1(nums1.begin(), nums1.end());
      vector<int> a;
vector<int> b;
vector<vector<int>>ans;
       unordered_set<int> s2(nums2.begin(), nums2.end());
      
       for(auto x:s1)
       {
       if(s2.find(x)==s2.end())
        {
            a.push_back(x);
        }
       }
       for(auto y:s2)
       {
        if(s1.find(y)==s1.end())
        {
        b.push_back(y);
        }

       }
       ans.push_back(a);
       ans.push_back(b);
       return ans;
    }
};