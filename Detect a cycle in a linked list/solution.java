import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Integer;
import java.lang.Math;

 public class Main{
     static class Node {
         int val;
         Node next;
         Node(int val){
             this.val = val;
             this.next = null;
         }
     }
     public static boolean cycleInLinkedList(Node head) {
         if(head == null || head.next == null) return false;
         Node slow = head;
         Node fast = head;
         while(fast != null && fast.next != null) {
             slow = slow.next;
             fast = fast.next.next;
             if(slow == fast) return true;
         }
         return false;
     }
     
     public static void main(String[] args) {
        // ✅ Linked list with cycle
        Node a = new Node(1);
        Node b = new Node(2);
        Node c = new Node(3);
        Node d = new Node(4);

        a.next = b;
        b.next = c;
        c.next = d;
        d.next = b; // cycle back to node b

        System.out.println("List 1 has cycle? " + cycleInLinkedList(a)); // should print true

        // ✅ Linked list without cycle
        Node p = new Node(10);
        Node q = new Node(20);
        Node r = new Node(30);

        p.next = q;
        q.next = r;
        r.next = null;

        System.out.println("List 2 has cycle? " + cycleInLinkedList(p)); // should print false
    }
     
     
 }
