package structure;

public class ExpUserInfo extends UserInfo {
    private double heartRate;

    public ExpUserInfo(double height, double weight, double heartRate) {
        super(height, weight);
        this.heartRate = heartRate;
    }

    public double getHeartRate() {
        return heartRate;
    }

    public void setHeartRate(double heartRate) {
        this.heartRate = heartRate;
    }
}
