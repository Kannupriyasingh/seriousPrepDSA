import java.util.Scanner;

class FactorialCalculator {
    private static long factorial(int num) {
        if(num == 0 || num == 1)
            return 1;
        return num * factorial(num-1);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input a number: ");
        int num = sc.nextInt();
        
        long res = factorial(num);
        System.out.println("Factorial of " + num + " is " + res);
        sc.close();
    }
}
