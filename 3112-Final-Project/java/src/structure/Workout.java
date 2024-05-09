package structure;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Workout {
    private Date date;
    private List<Exercise> exercises;

    public Workout(Date date) {
        this.date = date;
        this.exercises = new ArrayList<>();
    }

    public void addExercise(Exercise exercise) {
        this.exercises.add(exercise);
    }

    public List<Exercise> getExercises() {
        return exercises;
    }

    public Date getDate() {
        return date;
    }

    public void setDate(Date date) {
        this.date = date;
    }
}