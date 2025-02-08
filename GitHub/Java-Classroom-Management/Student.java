public class Student {
    private String fullName;
    private int id;
    private double gpa;

    public Student(String fullName, int id, double gpa) {
        this.fullName = fullName;
        this.id = id;
        this.gpa = gpa;
    }

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public String getFullName() {
        return fullName;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    public void setGPA(double gpa) {
        this.gpa = gpa;
    }

    public double getGPA() {
        return gpa;
    }
}
