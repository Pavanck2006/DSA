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
    public ListNode partition(ListNode head, int x) {
        ListNode left = new ListNode(-1);
        ListNode lefttrail = left;
        ListNode right = new ListNode(-1);
        ListNode righttrail = right;
        while(head != null)
        {
            if(head.val < x)
            {
                lefttrail.next = head;
                lefttrail = head;
            }
            else
            {
                righttrail.next = head;
                righttrail = head;
            }
            head = head.next;
        }
        righttrail.next = null;
        lefttrail.next = right.next;
        return left.next;
    }
}