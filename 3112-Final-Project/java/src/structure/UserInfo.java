package structure;

public class UserInfo {
    private double height;
    private double weight;
    private double bmi;

    public UserInfo(double height, double weight) {
        this.height = height;
        this.weight = weight;
        this.bmi = calculateBMI();
    }

    private double calculateBMI() {
        return (weight / (height * height)) * 703;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
        this.bmi = calculateBMI();
    }

    public double getWeight() {
        return weight;
    }

    public void setWeight(double weight) {
        this.weight = weight;
        this.bmi = calculateBMI();
    }

    public double getBMI() {
        return bmi;
    }
}
