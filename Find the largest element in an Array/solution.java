import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Integer;
import java.lang.Math;

 public class Main{
     
     public static int largestElementUsingSingleTraverse(ArrayList<Integer>arr, int n) {
         int largestElement = Integer.MIN_VALUE;
         for(int i : arr) {
             largestElement = Math.max(largestElement, i);
         }
         
         return largestElement;
     }
     public static int largestElementUsingInbuiltSortFunction(ArrayList<Integer>arr, int n) {
        //  Arrays.sort(arr, Collections.reverseOrder()); // This is used when int[] numbers = {5, 2, 8};
        Collections.sort(arr, Collections.reverseOrder()); // This is used when ArrayList<Integer>
         return arr.get(0);
     }
     public static void main(String[] args) {
         ArrayList<Integer>arr = new ArrayList<>(Arrays.asList(34, 5, 67, 11, 4));
         int n = arr.size();
         
         int ans = largestElementUsingInbuiltSortFunction(arr, n);
        //  int ans = largestElementUsingSingleTraverse(arr, n);
         
         System.out.println("Largest Element of array is: " + ans);
         
     }
 }
