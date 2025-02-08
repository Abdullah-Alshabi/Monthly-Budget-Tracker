import java.util.ArrayList;

public class Room {
    protected int numberOfComputers;
    protected int capacity;
    protected static int studentCount = 0;
    protected String lightStatus = "OFF";
    protected ArrayList<Student> studentsInClass;

    public Room() {
        studentsInClass = new ArrayList<>();
    }

    public void enter(Student s) {
        if (studentsInClass.contains(s)) {
            System.out.println("The student " + s.getFullName() + " is already in the class.");
        } else {
            if (studentCount >= capacity) {
                System.out.println("Class is full.");
            } else {
                System.out.println("The student " + s.getFullName() + " entered the class.");
                studentsInClass.add(s);
                studentCount++;
            }
        }
    }

    public void leave(Student s) {
        if (studentsInClass.remove(s)) {
            System.out.println("The student " + s.getFullName() + " left the class.");
            studentCount--;
        } else {
            System.out.println("The student " + s.getFullName() + " is not in the class.");
        }
    }

    public void printStudents() {
        int counter = 1;
        for (Student stu : studentsInClass) {
            System.out.println(counter + " - " + stu.getFullName());
            counter++;
        }
    }

    public int getCapacity() {
        return capacity;
    }

    public int getNumberOfComputers() {
        return numberOfComputers;
    }
}
