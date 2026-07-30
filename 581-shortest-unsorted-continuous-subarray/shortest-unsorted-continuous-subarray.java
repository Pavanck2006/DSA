class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int n = nums.length;
        if(n==1)
        return 0;
        int []copy = nums.clone();
        Arrays.sort(copy);
        int left=0;
        int right = n-1;
        while(left<n && nums[left]==copy[left])
        left++;
        while(right>left && nums[right]==copy[right])
        right--;
        return right - left +1;
    }
}