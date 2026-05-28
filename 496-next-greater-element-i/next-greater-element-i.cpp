class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nge;
        for(int i=0;i<nums1.size();i++)
        { 
            int j=0;
           while(j<nums2.size()){
           if(nums1[i]==nums2[j])
           break;
           j++;
           }
           int ans=-1;;
           for(int k=j+1;k<nums2.size();k++)
           {
            if(nums1[i]<nums2[k])
            {
            ans=nums2[k];
            break;
            }
            
           }
           nge.push_back(ans);
        }
        return nge;

    }
};