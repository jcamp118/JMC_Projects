package structure;

import java.util.ArrayList;
import java.util.List;

public class Plan {
    private List<Goal> goals;
    private List<Workout> workouts;

    public Plan() {
        this.goals = new ArrayList<>();
        this.workouts = new ArrayList<>();
    }

    public void addGoal(Goal goal) {
        this.goals.add(goal);
    }

    public void addWorkout(Workout workout) {
        this.workouts.add(workout);
    }

    public List<Goal> getGoals() {
        return goals;
    }

    public List<Workout> getWorkouts() {
        return workouts;
    }
}