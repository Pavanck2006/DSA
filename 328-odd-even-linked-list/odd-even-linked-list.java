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
    public ListNode oddEvenList(ListNode head) {
        ArrayList<ListNode>arr = new ArrayList<>();
       ListNode temp = head;
       if(head == null || head.next == null)
       return head;
       while(temp != null)
       {
        arr.add(temp);
        if(temp.next == null)
        break;
        temp = temp.next.next;
       }
       temp = head.next;
       while(temp != null)
       {
        arr.add(temp);
        if(temp.next == null)
        break;
        temp = temp.next.next;
       }
       for(int i=0;i<arr.size()-1;i++)
       {
        arr.get(i).next = arr.get(i+1);
       }
       arr.get((arr.size()-1)).next = null;
       return head;
    }
}