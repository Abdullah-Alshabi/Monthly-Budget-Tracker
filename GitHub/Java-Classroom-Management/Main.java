public class Main {
    public static void main(String[] args) {
        System.out.println("----------Q1: Students Entering the Classroom ----------");

        Classroom room203 = new Classroom();
        Student student1 = new Student("Ali Mosa", 1121456423, 4.2);
        Student student2 = new Student("Majed Ahmad", 1121456423, 3.8);
        Student student3 = new Student("Nawaf Jaber", 1121456423, 4.0);
        Student student4 = new Student("Khaleed Bader", 1121456423, 3.5);

        room203.enter(student1);
        room203.enter(student2);
        room203.enter(student3);
        room203.enter(student4);

        System.out.println("----------------------------------------------------------------");
        System.out.println("Students currently in Room 203:");
        room203.printStudents();

        System.out.println("\n----------Q2: Light Status ----------");
        System.out.println("The light in the room is: " + room203.getLightStatus());
        room203.setLightStatus(true);
        System.out.println("The light in the room is now: " + room203.getLightStatus());

        System.out.println("\n----------Q3: Number of Computers ----------");
        Laboratory lab222 = new Laboratory();

        System.out.println("Number of computers in classroom 203: " + room203.getNumberOfComputers());
        System.out.println("Number of computers in lab 222: " + lab222.getNumberOfComputers());
    }
}
