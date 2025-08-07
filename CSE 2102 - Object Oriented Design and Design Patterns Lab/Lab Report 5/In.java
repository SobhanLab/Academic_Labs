class OuterClass {
    int x = 10;

    class InnerClass {
        int y = 5;
    }
}

public class In {
    public static void main(String[] args) {
        OuterClass obj1 = new OuterClass();
        OuterClass.InnerClass ob2 = obj1.new InnerClass();

        System.out.println("Output is: "+(ob2.y + obj1.x));
    }
}
