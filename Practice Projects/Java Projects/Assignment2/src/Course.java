public class Course {
    String name, courseId, letterGrade;
    double credit;
    Course(String name, String courseId, int credit, String letterGrade) {
        this.name = name;
        this.courseId = courseId;
        this.credit = credit;
        this.letterGrade = letterGrade;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setCourseId(String courseId) {
        this.courseId = courseId;
    }

    public String getCourseId() {
        return courseId;
    }

    public void setLetterGrade(String letterGrade) {
        this.letterGrade = letterGrade;
    }

    public String getLetterGrade() {
        return letterGrade;
    }

    public void setCredit(double credit) {
        this.credit = credit;
    }

    public double getCredit() {
        return credit;
    }
    public double getCoursePoint() {
        switch (letterGrade) {
            case "A+":
                return 5.0;
            case "A":
                return 4.75;
            case "B+":
                return 4.5;
            case "B":
                return 4.0;
            case "C+":
                return 3.5;
            case "C":
                return 3.0;
            case "D+":
                return 2.5;
            case "D":
                return 2.0;
            case "F":
                return 1.0;
            default:
                System.out.println("Invalid letter grade: " + letterGrade);
        }
        return 0;
    }
}
