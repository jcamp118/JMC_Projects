package structure;

import java.util.ArrayList;
import java.util.List;

public class User {
    private String username;
    private String email;
    private List<Workout> workouts;
    private List<Plan> plans;

    public User(String username, String email) {
        this.username = username;
        this.email = email;
        this.workouts = new ArrayList<>();
        this.plans = new ArrayList<>();
    }

    public void addWorkout(Workout workout) {
        this.workouts.add(workout);
    }

    public void addPlan(Plan plan) {
        this.plans.add(plan);
    }

    public List<Workout> getWorkouts() {
        return workouts;
    }

    public List<Plan> getPlans() {
        return plans;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
}