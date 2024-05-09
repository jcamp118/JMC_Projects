package structure;

public class Goal {
    private String description;
    private boolean isAchieved;

    public Goal(String description) {
        this.description = description;
        this.isAchieved = false;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public boolean isAchieved() {
        return isAchieved;
    }

    public void setAchieved(boolean achieved) {
        isAchieved = achieved;
    }
}