public class Main {
    public static void main(String[] args) {

        System.out.println("----------Q1----------");
        Classroom room203 = new Classroom();
        Student student1 = new Student("Ali Mosa", 1121456423, 4.2);
        Student student2 = new Student("Majed Ahmad", 1121456423, 4.2);
        Student student3 = new Student("Nawaf Jaber", 1121456423, 4.2);
        Student student4 = new Student(" Khaleed Bader", 1121456423, 4.2);
        room203.enter(student1);
        room203.enter(student2);
        room203.enter(student3);
        room203.enter(student4);
        System.out.println("----------------------------------------------------------------");
        room203.print();
//        room203.leave(student1);
//        room203.leave(student1);

//        System.out.println("----------Q2----------");
//        System.out.println("The light in room is " + room203.getLigjtStatus());
//        room203.setLightStatus(true);
//        System.out.println("The light in room is " + room203.getLigjtStatus());
//
//        System.out.println("----------Q3----------");
        Laboratory lab222 = new Laboratory();
//        room203.setNumberOFComputer();
//        lab222.setNumberOFComputer();
        System.out.println("Number of computers in classroom 203 is: " + room203.getNumberOFComputer());
        System.out.println("Number of computer in lab 222 is: " + lab222.getNumberOFComputer());


    }
}