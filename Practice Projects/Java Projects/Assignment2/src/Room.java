import java.util.ArrayList;
import java.util.List;

public class Room {
    int numberOFComputer;
    int capasity;
    static int student = 1;
    String lightStatus = "OFF";
    ArrayList<Student> studentsInClass;
    Room() {
        studentsInClass = new ArrayList<>();
    }

    public void enter(Student s) {
        if (studentsInClass.contains(s)) {
            System.out.println("The student: " + s.getFullName() + " has already entered the class.");
        } else {
            if (student > capasity) {
                System.out.println("Class is full");
            } else {
                System.out.println("The student: " + s.getFullName() + " entered the class.");
                studentsInClass.add(s);
                student++;
            }
        }
    }
    public void leave(Student s) {
        if(studentsInClass.remove(s)) {
            System.out.println("The student: " + s.getFullName() + " is left in the class.");
        }
        else {
            System.out.println("The student: " + s.getFullName() + " has already left the class.");
        }
    }
    void print() {
        int counter = 1;
        System.out.println("The classroom 203 has the following students: ");
        for(Student stu : studentsInClass) {
            System.out.println(counter + "-" + stu.getFullName());
            counter++;
        }
    }
    int getCapasity() {
        return capasity;
    }
    int getNumberOFComputer() {
        return numberOFComputer;
    }

}
