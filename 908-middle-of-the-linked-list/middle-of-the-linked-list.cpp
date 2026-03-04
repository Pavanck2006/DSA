/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;          // Value of the node
 *     ListNode *next;   // Pointer to next node
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // 🔹 Using Tortoise and Hare Algorithm
        // slow pointer moves 1 step at a time
        // fast pointer moves 2 steps at a time
        
        ListNode* fast = head;   // Hare pointer
        ListNode* slow = head;   // Tortoise pointer
        
        // Loop until fast reaches end
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;           // Move slow by 1 step
            fast = fast->next->next;     // Move fast by 2 steps
        }
        
        // When fast reaches the end,
        // slow will be at the middle node
        return slow;
    }
};