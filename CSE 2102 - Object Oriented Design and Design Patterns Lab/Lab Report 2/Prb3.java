// Search an element in an array
import java.util.Scanner;
public class Prb3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        System.out.print("Enter the size of array: ");
        n = sc.nextInt();

        int[] ar = new int[n];
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();
        System.out.print("Enter the value to find: ");

        int target = sc.nextInt();
        for (int i = 0; i < n; i++) if (ar[i] == target) {
            System.out.println("Index: " + i);
            
            return;
        }
        System.out.println("Invalid value!");
    }
}