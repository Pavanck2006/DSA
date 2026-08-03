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
    private void mergeSort(int[] arr, int low,int high)
    {
        if(low<high)
        {
            int mid = low +(high-low)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
    private void merge(int [] arr,int low,int mid,int high)
    {
     ArrayList<Integer>temp = new ArrayList<>();
       int i = low;
       int j = mid+1;
       while(i<= mid && j<= high)
       {
        if(arr[i]<=arr[j])
        {
            temp.add(arr[i]);
            i++;
        }
        else
        {
            temp.add(arr[j]);
            j++;
        }
       }
       while(i<=mid)
       {
         temp.add(arr[i]);
            i++;
       }
       while(j<=high)
       {
        temp.add(arr[j]);
            j++;
       }
       for (int k = 0; k < temp.size(); k++) {
    arr[low + k] = temp.get(k);
}

    }
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
       mergeSort(arr,0,arr.length-1);
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