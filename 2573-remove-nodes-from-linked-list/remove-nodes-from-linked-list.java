/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNodes(ListNode head) {

        // If this is the last node
        if (head.next == null) {
            return head;
        }

        // Process the nodes on the right first
        head.next = removeNodes(head.next);

        // If the next node has a greater value, remove current node
        if (head.val < head.next.val) {
            return head.next;
        }

        return head;
    }
}