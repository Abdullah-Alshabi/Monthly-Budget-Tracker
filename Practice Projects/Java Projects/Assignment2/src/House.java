public class House {
    String address;
    private String city;
    private boolean isFinished;
    House() {
        this("Not Available,", "Not Available,", false);
    }
    House(String address, String city, boolean isFinished) {
        this.address = address;
        this.city = city;
        this.isFinished = isFinished;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getAddress() {
        return address;
    }

    public void setFinished(boolean finished) {
        isFinished = finished;
    }

    public boolean isFinished() {
        return isFinished;
    }
    public String toString() {
        return " address: " + address + " city: " + city + " isFinished: " + isFinished;
    }
    String s() {
        String c = city;
        return c;
    }
}
