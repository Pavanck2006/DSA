class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        
        /*
        this is for only two test case not possible for all test case
        if(n<3)
        {
            return *max_element(nums.begin(),nums.end());
        }
        return nums[n-1];*/
        int count =1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                count++;
            }

            if(count == 3)
                return nums[i];
        }

        return nums[0];
    }
};