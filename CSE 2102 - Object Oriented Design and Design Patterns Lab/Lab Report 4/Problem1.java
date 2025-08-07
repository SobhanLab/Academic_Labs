class Student {
    private int x = 40;
    public int y = x + 10;
}

public class Problem1 {
    public static void main(String[] args) {
        Student s = new Student();
        System.out.println(s.y);
    }
}