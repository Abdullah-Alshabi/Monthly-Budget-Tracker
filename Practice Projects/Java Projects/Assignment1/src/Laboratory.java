public class Laboratory extends Room {
    Laboratory() {
        setCapasity();
        setNumberOFComputer();
    }
    void setNumberOFComputer() {
        numberOFComputer = 30;
    }
    void setCapasity() {
        capasity = 30;
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
}

