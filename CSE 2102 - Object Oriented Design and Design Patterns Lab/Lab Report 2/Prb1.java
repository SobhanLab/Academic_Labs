// Sum of all odd numbers in an array
import java.util.Scanner;
public class Prb1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter the size of array : ");
        n = sc.nextInt();
        int[] ar = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();
        for (int i = 0; i < n; i++) if (ar[i] % 2 != 0) sum += ar[i];
        System.out.println("Sum of all odd numbers in the array: " + sum);
    }
}