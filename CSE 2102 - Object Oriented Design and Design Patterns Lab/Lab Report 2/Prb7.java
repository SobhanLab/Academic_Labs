// Sum of all prime numbers in an array
import java.util.Scanner;
public class Prb7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.print("Enter the size of array: ");
        n = sc.nextInt();

        int[] ar = new int[n];
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();
        int sum = 0;
        for (int num : ar) if (checkPrime(num)) sum += num;
        System.out.println("Sum of prime numbers: " + sum);
    }
    
    static boolean checkPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
}