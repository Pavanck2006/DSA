class Solution {
    public int missingMultiple(int[] nums, int k) {
        int i =0;
        int max = 0;
        while(i < nums.length)
        {
            if(max <= nums[i])
            max = nums[i];
            i++;
        }
            
            int number = k;
       while (true) {

            boolean found = false;

            for (int num : nums) {
                if (num == number) {
                    found = true;
                    break;
                }
            }

            if (!found) {
               break;
            }

            number += k;
        }
    return number;
    }   
} 