class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>ans(n);
     sort(nums1.begin(),nums1.end());
     vector<pair<int,int>>sort2;
     for(int i=0;i<n;i++)
     {
        sort2.push_back({nums2[i],i});
     }
     sort(sort2.begin(),sort2.end());
     int left=0;
     int right=n-1;
     for(int i=n-1;i>=0;i--)
     {
        if(nums1[right]>sort2[i].first)
        {
            ans[sort2[i].second]=nums1[right];
            right--;
        }
        else
        {
            ans[sort2[i].second]=nums1[left];
            left++;
        }
     }
   return ans;
    }
};