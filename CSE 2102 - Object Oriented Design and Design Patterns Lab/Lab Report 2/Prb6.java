// Average excluding highest and lowest
import java.util.Scanner;
public class Prb6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the size of array: ");
        n = sc.nextInt();

        int[] ar = new int[n];
        for (int i = 0; i < n; i++) ar[i] = sc.nextInt();
        int min = ar[0], max = ar[0], sum = ar[0];
        for (int i = 1; i < n; i++) {
            sum += ar[i];
            if (ar[i] < min) min = ar[i];
            if (ar[i] > max) max = ar[i];
        }

        sum = sum - (min + max);
        System.out.println("Average: " + (sum / (double)(n - 2)));
    }
}