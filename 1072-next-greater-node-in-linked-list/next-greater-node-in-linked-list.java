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
    public int[] nextLargerNodes(ListNode head) {
        ListNode temp = head;
        ArrayList<Integer> arr = new ArrayList<>();
        while(temp != null)
        {
            arr.add(temp.val);
            temp = temp.next;
        }
       Stack<Integer> st = new Stack<>();
       int [] ans = new int[arr.size()];

       for(int i=0;i<arr.size();i++)
       {
       while(!st.empty() && arr.get(st.peek())<arr.get(i))
       {
        int index = st.pop();
        ans[index]=arr.get(i);
       }
       st.push(i);
       }
       return ans;
    }
}