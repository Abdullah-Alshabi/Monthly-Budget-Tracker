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
//    void enter(Student s) {
//        if(s.contains(stu));
//        if(student > capasity) {
//            System.out.println("class is full");
//        }
//        else{
//            System.out.println("The student: " + s.getFullName() + " Entered the class.");
//            student++;
//        }
//    }
//    void leave (Student s) {
//        System.out.println("The student: " + s.getFullName() + " left the class.");
//        student--;
//    }
public void enter(Student s) {
    if (studentsInClass.contains(s)) {
        System.out.println("The student: " + s.getFullName() + " is already in the class.");
    } else {
        if (student > capasity) {
            System.out.println("Class is full");
        } else {
            System.out.println("The student " + s.getFullName() + " entered the class.");
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
            System.out.println("The student: " + s.getFullName() + "has already left the class");
        }
    }
    void print() {
        int counter = 1;
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
