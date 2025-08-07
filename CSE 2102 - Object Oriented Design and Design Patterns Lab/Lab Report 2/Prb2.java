// Index-wise sum of two arrays
import java.util.Scanner;
public class Prb2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter the size of arrays: ");
        n = sc.nextInt();
        int[] arr1 = new int[n], arr2 = new int[n], sumArr = new int[n];
        for (int i = 0; i < n; i++) arr1[i] = sc.nextInt();
        for (int i = 0; i < n; i++) arr2[i] = sc.nextInt();
        for (int i = 0; i < n; i++) sumArr[i] = arr1[i] + arr2[i];
        for (int num : sumArr) System.out.print(num + " ");
    }
}
