import java.util.ArrayList;

public class Classroom extends Room {
    ArrayList<Student> studentsInClass;
    Classroom() {
        setCapasity();
        setNumberOFComputer();
    }
    void setLightStatus(boolean lightStatus) {
        if(lightStatus == false) {
            this.lightStatus = "OFF";
        }
        else {
            this.lightStatus = "ON";
        }
    }
    String getLigjtStatus() {
        return lightStatus;
    }
    void setNumberOFComputer() {
        numberOFComputer = 1;
    }
    void setCapasity() {
        capasity = 50;
    }
}
