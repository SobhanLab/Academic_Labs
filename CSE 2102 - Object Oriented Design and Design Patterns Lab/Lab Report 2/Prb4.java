// Reverse array without second array
import java.util.Scanner;
public class Prb4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.print("Enter the size of array: ");
        n = sc.nextInt();
        
        int[] ar = new int[n];
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();
        for (int i = n - 1; i >= 0; i--) System.out.print(ar[i] + " ");
    }
}