import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Integer;
import java.lang.Math;

 public class Main{
     
     public static int partition(ArrayList<Integer>arr, int left, int right) {
         
         int pivot = arr.get(right);
         int i = left-1;
         
         for(int j = left; j < right; j++) {
             if(arr.get(j) < pivot) {
                 i++;
                 swap(arr, i, j);
             }
         }
         
         // Move pivot after smaller elements and
         // return its position
         swap(arr, i+1, right);
         return i+1;
     }
     
     public static void swap(ArrayList<Integer>arr, int index1, int index2) {
         int temp = arr.get(index1);
         arr.set(index1, arr.get(index2));
         arr.set(index2, temp);
     }
     
     public static void quickSort(ArrayList<Integer>arr, int left, int right) {
         if(left < right) {
             
             int pi = partition(arr, left, right);
             quickSort(arr, left, pi-1);
             quickSort(arr, pi+1, right);
         }
     }
     
     public static void main(String[] args) {
         ArrayList<Integer>arr = new ArrayList<>(Arrays.asList(5,4,3,2,1));
         
         int n = arr.size();
         
         quickSort(arr, 0, n-1);
         for(int i = 0; i < n; i++) {
             System.out.print(arr.get(i) + " ");
         }
     }
 }
