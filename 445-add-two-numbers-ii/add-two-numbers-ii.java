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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
       Stack<Integer> s1 = new Stack<>();
       Stack<Integer> s2 = new Stack<>();
       ListNode t1 = l1;
       ListNode t2 = l2;
       while(t1 != null)
       {
        s1.push(t1.val);
        t1 = t1.next;
       }
       while(t2 != null)
       {
        s2.push(t2.val);
        t2 = t2.next;
       }
       int carry =0;
       ListNode cur = null;
       while(!s1.empty() || !s2.empty() || carry != 0)
       {
        int sum = carry;
        if(!s1.empty())
        {
            sum += s1.pop();
        }
        if(!s2.empty())
        {
            sum += s2.pop();
        }
        ListNode newnode = new ListNode(sum%10);
        carry = sum/10;
        newnode.next = cur;
        cur = newnode;//reverse it 

       }
       return cur;
    }
}