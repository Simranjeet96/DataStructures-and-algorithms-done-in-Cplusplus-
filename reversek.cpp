public class Solution {
	public static LinkedListNode<Integer> kReverse(LinkedListNode<Integer> head, int k) {

	    LinkedListNode<Integer> counter = head;
   LinkedListNode<Integer> prev = null;
  LinkedListNode<Integer> next;
    int count = 0;
    while (counter!= null && count < k)
    {
      next=prev;
       prev = counter;
       counter = counter.next;
       prev.next = next;
       count++;
    }
     if(counter !=  null)
         head.next = kReverse(counter, k);

    return prev;








	}
}
