public class InstanceCounter {
    public static void main(String[] args) {
        Coffee largeCup = new Coffee();
        Coffee largeCup2 = new Coffee();

        System.out.println("Total number of cups: " + Coffee.getCount());
    }
}
