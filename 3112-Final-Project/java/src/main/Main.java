package main;

import structure.*;
import java.util.*;
import java.io.*;

public class Main {
    private static final String HISTORY_FILE = "workoutHistory.txt";

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Workout> workoutHistory = loadWorkoutHistory();

        System.out.println("Welcome to the Workout Tracker!");
        User user = new User("Harry Paul", "harryp@gmail.com");

        String continueLogging = "yes";
        while (continueLogging.equalsIgnoreCase("yes")) {
            System.out.print("Would you like to create a plan or just log a workout? (plan/workout): ");
            String choice = scanner.nextLine();

            if (choice.equalsIgnoreCase("plan")) {
                Plan plan = new Plan();
                System.out.println("Let's create your workout plan!");

                String addMore = "yes";
                while (addMore.equalsIgnoreCase("yes")) {
                    Workout workout = createWorkout(scanner);
                    plan.addWorkout(workout);

                    System.out.print("Would you like to add another workout to your plan? (yes/no): ");
                    addMore = scanner.nextLine();
                }

                user.addPlan(plan);
                System.out.println("Your workout plan has been created.");
            } else if (choice.equalsIgnoreCase("workout")) {
                Workout workout = createWorkout(scanner);
                workoutHistory.add(workout);
                System.out.println("Your workout has been logged.");
            }

            System.out.print("Would you like to log another workout or plan? (yes/no): ");
            continueLogging = scanner.nextLine();
        }

        saveWorkoutHistory(workoutHistory);
        displayWorkoutHistory(workoutHistory);
        scanner.close();
    }

    private static Workout createWorkout(Scanner scanner) {
        System.out.print("Enter the exercise name: ");
        String exerciseName = scanner.nextLine();
        System.out.print("Enter the duration in minutes: ");
        int duration = scanner.nextInt();
        scanner.nextLine(); // consume the leftover newline

        Exercise exercise = new Exercise(exerciseName, duration);
        Workout workout = new Workout(new Date());
        workout.addExercise(exercise);
        return workout;
    }

    private static void displayWorkoutHistory(List<Workout> workoutHistory) {
        System.out.println("Workout History:");
        for (Workout w : workoutHistory) {
            for (Exercise e : w.getExercises()) {
                System.out.println("Exercise: " + e.getName() + ", Duration: " + e.getDuration() + " minutes on " + w.getDate());
            }
        }
    }

    private static void saveWorkoutHistory(List<Workout> workoutHistory) {
        try (PrintWriter out = new PrintWriter(new FileWriter(HISTORY_FILE, false))) {
            for (Workout w : workoutHistory) {
                for (Exercise e : w.getExercises()) {
                    out.println(e.getName() + "," + e.getDuration() + "," + w.getDate().getTime());
                }
            }
        } catch (IOException e) {
            System.err.println("Error saving workout history: " + e.getMessage());
        }
    }

    private static List<Workout> loadWorkoutHistory() {
        List<Workout> history = new ArrayList<>();
        File file = new File(HISTORY_FILE);
        if (file.exists()) {
            try (Scanner scanner = new Scanner(file)) {
                while (scanner.hasNextLine()) {
                    String line = scanner.nextLine();
                    String[] parts = line.split(",");
                    if (parts.length == 3) {
                        String name = parts[0];
                        int duration = Integer.parseInt(parts[1]);
                        Date date = new Date(Long.parseLong(parts[2]));
                        Exercise exercise = new Exercise(name, duration);
                        Workout workout = new Workout(date);
                        workout.addExercise(exercise);
                        history.add(workout);
                    }
                }
            } catch (FileNotFoundException e) {
                System.err.println("File not found: " + e.getMessage());
            } catch (NumberFormatException e) {
                System.err.println("Number format exception: " + e.getMessage());
            }
        }
        return history;
    }
}
