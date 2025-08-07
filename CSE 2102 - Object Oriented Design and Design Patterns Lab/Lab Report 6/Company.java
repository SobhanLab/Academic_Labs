class Employee {
    protected String name;
    protected int id;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public double calculateSalary() {
        return 0;
    }
}

class Worker extends Employee {
    private double baseSalary;
    private double bonus;

    public Worker(String name, int id, double baseSalary, double bonus) {
        super(name, id);
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    public double calculateSalary() {
        return baseSalary + bonus;
    }
}

class Supervisor extends Employee {
    private double baseSalary;
    private double bonus;

    public Supervisor(String name, int id, double baseSalary, double bonus) {
        super(name, id);
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    public double calculateSalary() {
        return baseSalary + bonus;
    }
}

public class Company {
    public static void main(String[] args) {
        Employee worker = new Worker("Worker", 1001, 15000, 5000);
        Employee supervisor = new Supervisor("Supervisor", 2001, 30000, 10000);

        System.out.println("Worker salary: " + worker.calculateSalary());
        System.out.println("Supervisor salary: " + supervisor.calculateSalary());
    }
}
