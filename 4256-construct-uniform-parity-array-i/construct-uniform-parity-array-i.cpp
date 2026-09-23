
       class Solution {
    public:
    bool uniformArray(vector<int>& nums1) {
        int sum = 0;
        int count = 0;
        vector<int> nums2(nums1.size());
        if(nums1.size()==1)
        return true;
        for(int i = 0; i < nums1.size(); i++)
        {
            sum += nums1[i];
        }

        if(sum % 2 == 0)
        {
           
                return true;
        }

        count = 0;

        for(int i = 0; i < nums1.size(); i++)
        {
            if(nums1[i] % 2 != 0)
            {
                count++;
            }
        }

        if(count == nums1.size())
        {
            return true;
        }

        count = 0;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums1.size();j++)
            {
                if(i !=j && (nums1[i]%2 != nums1[j]%2))
                {
                nums2[i]=nums1[i]-nums1[j];
                break;
                }
               
            }
             count++;
        }

        if(count == nums1.size())
        {
            return true;
        }

        return false;
    }
};