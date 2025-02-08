public class Laboratory extends Room {
    public Laboratory() {
        super();
        setCapacity();
        setNumberOfComputers();
    }

    public void setNumberOfComputers() {
        numberOfComputers = 30;
    }

    public void setCapacity() {
        capacity = 30;
    }

    public void setLightStatus(boolean lightStatus) {
        this.lightStatus = lightStatus ? "ON" : "OFF";
    }

    public String getLightStatus() {
        return lightStatus;
    }
}
