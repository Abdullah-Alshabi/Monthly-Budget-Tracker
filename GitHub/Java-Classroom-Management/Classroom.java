import java.util.ArrayList;

public class Classroom extends Room {
    public Classroom() {
        super();
        setCapacity();
        setNumberOfComputers();
    }

    public void setLightStatus(boolean lightStatus) {
        this.lightStatus = lightStatus ? "ON" : "OFF";
    }

    public String getLightStatus() {
        return lightStatus;
    }

    public void setNumberOfComputers() {
        numberOfComputers = 1;
    }

    public void setCapacity() {
        capacity = 50;
    }
}
