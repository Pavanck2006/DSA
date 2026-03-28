class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
         int i =1;
        //for(int i = 1; i < n; i++) {
            while( i<n)
            {
            if(nums[i] < prev) {
                return nums[i];
            }
            prev = nums[i];
            i++;
        }

        return nums[0]; 
        /*
        class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] > nums[right]) {
                left = mid + 1;
            } 
            else {
                right = mid;
            }
        }

        return nums[left];
    }
};
*/
    }
};