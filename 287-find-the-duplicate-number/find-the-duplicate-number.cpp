class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //it completly depend upon the node, every first time node piont to index after to element that element next index ..(0,3,4,2)
        int slow = nums[0],fast = nums[0];
        do{
            slow = nums[slow]; // it move one step in each iteration
            fast = nums[nums[fast]];//it move two step in each iteration
        }while(slow != fast);

        slow = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
        
    }
};