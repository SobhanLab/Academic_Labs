// Find second highest element
import java.util.Scanner;
public class Prb5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the size of array: ");
        n = sc.nextInt();

        int[] ar = new int[n];
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();

        int max = Integer.MIN_VALUE, secondMax = Integer.MIN_VALUE;
        for (int num : ar) {
            if (num > max) {
                secondMax = max;
                max = num;
            } else if (num > secondMax && num != max) {
                secondMax = num;
            }
        }
        
        System.out.println("Second highest: " + secondMax);
    }
}