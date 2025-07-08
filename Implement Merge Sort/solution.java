import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Integer;
import java.lang.Math;

 public class Main{
     
     public static void merge(ArrayList<Integer>arr, int left, int mid, int right) {
         int n1 = mid - left + 1; // size of left subarray
         int n2 = right - mid; // size of right subarray
         
         ArrayList<Integer>L = new ArrayList<>(n1);
         ArrayList<Integer>R = new ArrayList<>(n2);
         
         // copy the items in L and R
         for(int i = 0; i < n1; i++) {
             L.add(arr.get(left + i));
         }
         for(int i = 0; i < n2; i++) {
             R.add(arr.get(mid + 1 + i));
         }
         
         int i = 0, j = 0, k = left;
         
         // compare both L and R elements one by one and smaller value will get add in arr and so on...
         while(i < n1 && j < n2) {
             if(L.get(i) <= R.get(j)) {
                 arr.set(k, L.get(i));
                 i++;
             } else {
                 arr.set(k, R.get(j));
                 j++;
             }
             k++;
         }
         
         // Remaining elements
         while(i < n1) {
             arr.set(k, L.get(i));
             i++; k++;
         }
         while(j < n2) {
             arr.set(k, R.get(j));
             j++; k++;
         }
     }
     
     public static void mergeSort(ArrayList<Integer>arr, int left, int right) {
         
         if(left >= right) {
             return;
         }
         
         int mid = left + (right-left)/2;
         mergeSort(arr, left, mid);
         mergeSort(arr, mid+1, right);
         merge(arr, left, mid, right);
     }
     
     public static void main(String[] args) {
         ArrayList<Integer>arr = new ArrayList<>(Arrays.asList(3, 5, 2, 1, 18));
         int n = arr.size();
         
         mergeSort(arr, 0, n-1);
         
         for(int i = 0; i < n; i++) {
             System.out.print(arr.get(i) + " ");
         }
         
         
     }
 }
