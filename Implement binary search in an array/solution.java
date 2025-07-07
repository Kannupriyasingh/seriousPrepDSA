import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static boolean binarySearch(ArrayList<Integer>arr, int target) {
        int first = 0, last = arr.size()-1;
        while(first <= last) {
            int mid = (first+last)/2;
            
            if(arr.get(mid) == target) {
                System.out.println(target + " item is present in array");
                return true;
            } else if (arr.get(mid) > target) {
                last = mid-1;
            } else {
                first = mid+1;
            }
        }
        System.out.println(target + " item is NOT present in array");
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the target item: ");
        int target = sc.nextInt();
        ArrayList<Integer>arr = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        
        binarySearch(arr, target);
       
        
    }
}
