import java.util.ArrayList;
import java.util.List;

public class Student {
    String FullName;
    int id;
    double GPA;
     ArrayList<Course> Courses;


    Student(String FullName, int id, double GPA) {
        this.FullName = FullName;
        this.id = id;
        this.GPA = GPA;
        Courses = new ArrayList<Course>();
    }
    void setFullName(String FullName) {
        this.FullName = FullName;
    }
    String getFullName() {
        return FullName;
    }
    void setId(int id) {
        this.id = id;
    }
    int getId() {
        return id;
    }
    void setGPA(double GPA) {
        this.GPA = GPA;
    }
//    double getGPA() {
//        return GPA;
//    }


    public void addCourse(Course course) {
        if (Courses.contains(course)) {
            System.out.println("The student: " + FullName + " is already enrolled in the course: " + course.getName());
        } else {
            Courses.add(course);
        }
    }
        public double getGPA() {
            double gpa = 0.0;
            double totalCredits = 0.0;

            for (Course course : Courses) {
                gpa += course.getCoursePoint() * course.getCredit();
                totalCredits += course.getCredit();
            }

            return gpa / totalCredits;
        }
        }





