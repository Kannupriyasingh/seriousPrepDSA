import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Integer;
import java.lang.Math;

 public class Main{
     
     public static int smallestElementUsingSingleTraverse(ArrayList<Integer>arr, int n) {
         int smallestElement = Integer.MAX_VALUE;
         for(int i : arr) {
             smallestElement = Math.min(smallestElement, i);
         }
         
         return smallestElement;
     }
     public static int smallestElementUsingInbuiltSortFunction(ArrayList<Integer>arr, int n) {
        //  Arrays.sort(arr); // This is used when int[] numbers = {5, 2, 8};
        Collections.sort(arr); // This is used when ArrayList<Integer>
         return arr.get(0);
     }
     public static void main(String[] args) {
         ArrayList<Integer>arr = new ArrayList<>(Arrays.asList(34, 5, 67, 11, 4));
         int n = arr.size();
         
        //  int ans = smallestElementUsingInbuiltSortFunction(arr, n);
         int ans = smallestElementUsingSingleTraverse(arr, n);
         
         System.out.println("Smallest Element of array is: " + ans);
         
     }
 }
