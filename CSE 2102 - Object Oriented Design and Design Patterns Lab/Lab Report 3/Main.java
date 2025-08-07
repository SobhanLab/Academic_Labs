class Car {
    String brand;
    int price;

    Car(String b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        System.out.println("Car Brand: " + brand);
        System.out.println("Car Price: $" + price);
    }
}

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car("Toyota", 20000);
        myCar.display();
    }
}
