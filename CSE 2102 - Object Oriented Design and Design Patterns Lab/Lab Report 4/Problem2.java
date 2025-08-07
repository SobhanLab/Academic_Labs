class Student {
    private int x = 10;

    public void display() {
        System.out.println(x);
    }
}

public class Problem2 {
    public static void main(String[] args) {
        Student s = new Student();
        s.display();
    }
}
