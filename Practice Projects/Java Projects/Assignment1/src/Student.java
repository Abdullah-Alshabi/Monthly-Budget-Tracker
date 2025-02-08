public class Student {
    String FullName;
    int id;
    double GPA;
    Student(String FullName, int id, double GPA) {
        this.FullName = FullName;
        this.id = id;
        this.GPA = GPA;
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
    double getGPA() {
        return GPA;
    }
}
