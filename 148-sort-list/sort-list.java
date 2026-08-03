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
    public ListNode sortList(ListNode head) {
       ListNode temp = head;
       int count =0;
      while(temp != null)
      {
        count++;
        temp = temp.next;
      }
       int [] arr = new int[count];
       temp = head;
       int index =0;
       while(temp != null)
       {
       arr[index] = temp.val;
        temp=temp.next;
        index++;
       } 
       Arrays.sort(arr);
           temp = head;
              index =0;
             while(temp != null)
             {
                temp.val = arr[index++];
                temp = temp.next;
             }
             return head;

    }
}