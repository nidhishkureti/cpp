public class oops {
    private String color;
    private String brand;
    private String model;

    public oops(String color, String brand, String model) {
        this.color = color;
        this.brand = brand;
        this.model = model;
    }

    public void start() {
        System.out.println("Starting the car...");
    }

    public void accelerate() {
        System.out.println("Accelerating the car...");
    }

    public void brake() {
        System.out.println("Braking the car...");
    }

    public static void main(String[] args) {
        oops myCar = new oops("Red", "Toyota", "Corolla");
        myCar.start();
        myCar.accelerate();
        myCar.brake();
    }
}