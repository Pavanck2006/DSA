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
    public ListNode reverseBetween(ListNode head, int left, int right) {
     ListNode dummy = new ListNode(-1);
     dummy.next = head;
     ListNode perv = dummy;
     
        if(head == null || left == right)
        return head;
     for(int i=1;i<left;i++)
     {
        perv = perv.next;
     }

     ListNode cur = perv.next;
     for(int i=0;i<right-left;i++)
     {
       ListNode next = cur.next;

       cur.next = next.next;
       next.next = perv.next;
       perv.next = next;
     }
   return  dummy.next;
    }
}