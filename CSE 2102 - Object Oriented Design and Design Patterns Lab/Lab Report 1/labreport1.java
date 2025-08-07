    import java.util.Scanner;

    public class labreport1 {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            
            System.out.print("Enter a string: ");
            String str = in.nextLine();
            
            if (!str.isEmpty()) {
                System.out.println("First character: " + str.charAt(0));
            } else {
                System.out.println("String is empty, cannot get first character.");
            }
            
            System.out.println("Concatenated with ID: " + str.concat(" 241311069"));
            System.out.println("Contains 'Batch': " + str.contains("Batch"));
            System.out.println("Equals '34th': " + str.equals("34th"));
            System.out.println("Index of 'B': " + str.indexOf('B'));
            
            in.close();
        }
    }