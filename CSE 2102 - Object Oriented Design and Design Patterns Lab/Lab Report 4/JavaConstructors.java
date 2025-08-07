public class JavaConstructors {
    int x=50;
  
    public JavaConstructors(int y) {
      x = y;
    }
  
    public static void main(String[] args) {
        JavaConstructors myObj = new JavaConstructors(100);
      System.out.println(myObj.x);
    }
  }
  