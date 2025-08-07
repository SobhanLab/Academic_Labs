class Vehicle {
    public void speedUp() {
    }
}

class Car extends Vehicle {
    private int currentSpeed;

    public Car(int speed) {
        this.currentSpeed = speed;
    }

    public void speedUp() {
        currentSpeed += 20;
        System.out.println("Car speed: " + currentSpeed);
    }
}

class Bicycle extends Vehicle {
    private int currentSpeed;

    public Bicycle(int speed) {
        this.currentSpeed = speed;
    }

    public void speedUp() {
        currentSpeed += 5;
        System.out.println("Bicycle speed: " + currentSpeed);
    }
}

public class Road {
    public static void main(String[] args) {
        Vehicle car = new Car(60);
        Vehicle bicycle = new Bicycle(10);

        car.speedUp();
        bicycle.speedUp();
    }
}
