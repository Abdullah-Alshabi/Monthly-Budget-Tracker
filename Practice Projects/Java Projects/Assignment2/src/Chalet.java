public class Chalet extends House {
    String color;
    int age;
    String c;

    Chalet(String address, String city, boolean isFinished, String color, int age) {
        super(address, city, isFinished);
        this.color = color;
        this.age = age;
    }
    public String toString() {
        return super.toString() + ", color: " + color + "age: " + age;
    }

    public boolean equals(Object obj) {
        if(obj == null || getClass() != obj.getClass()) {
            return false;
        }
        if(obj == this) {
            return true;
        }
        Chalet c = (Chalet) obj;
        return (super.getAddress() == c.getAddress() && super.isFinished() == c.isFinished() && super.s() == c.s() && this.color == c.color && this.age == c.age);
    }


}
