class Vehicle {
    String model = "Nissan";
    int buildDate = 2015;

    public void displayCarInfo() {
        System.out.println("Model: " + model);
        System.out.println("Year: " + buildDate);
    }
}

class Toyota extends Vehicle {
    public void changeData() {
        model = "Prious";
        buildDate = 2022;
    }

    public void displayCarInfo() {
        System.out.println("Car Model: " + model);
        System.out.println("Year: " + buildDate);
    }
}

public class Car extends Toyota {
    public static void main(String[] args) {
        Toyota obj = new Toyota();

        obj.displayCarInfo();
        obj.changeData();
        obj.displayCarInfo();
    }
}
