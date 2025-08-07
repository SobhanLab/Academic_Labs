import java.util.Scanner;
    
    public class labreport2 {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            
            System.out.print("Enter another string: ");
            String str = in.nextLine();
            
            System.out.println("Is empty: " + str.isEmpty());
            System.out.println("Replacing '3' with 'X': " + str.replace('3', 'X'));
            
            String[] words = str.split(" ");
            System.out.println("Words in string:");
            for (int i = 0; i < words.length; i++) {
                System.out.println(words[i]);
            }
            
            System.out.println("Trimmed string: " + str.trim());
            
            in.close();
        }
    }