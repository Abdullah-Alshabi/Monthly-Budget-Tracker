public class Main {
    public static void main(String[] args) {

      System.out.println("--------------------Q1--------------------");
      Classroom room203 = new Classroom();
      Student student1 = new Student("Ali Mosa", 1121456423, 4.2);
      Student student2 = new Student("Majed Ahmed", 1320947347, 5.0);
      Student student3 = new Student("Nawaf Jaber", 1028956451, 3.9);
      Student student4 = new Student("Khaleed Bader", 1176456433, 4.5);
      room203.enter(student1);
      room203.enter(student1);
      room203.leave(student1);
      room203.leave(student1);

      System.out.println("--------------------Q2--------------------");
      room203.enter(student1);
      room203.enter(student2);
      room203.enter(student3);
      room203.enter(student4);
      System.out.println("");
      room203.print();

      System.out.println("--------------------Q3--------------------");
      Course aCourseS1 = new Course("OOP 1", "IT214", 3, "B");
      Course aCourseS2 = new Course("Database 1", "IT111", 3, "A+");
      student1.addCourse(aCourseS1);
      student1.addCourse(aCourseS2);
      System.out.println("The GPA of the student is: " + student1.getGPA());


        System.out.println("--------------------Q4--------------------");
        Chalet house1 = new Chalet("16 king fahad St, ", "alrass, ", true, "white, ", 13);
        Chalet house2 = new Chalet("16 king fahad St, ", "alrass, ", true, "white, ", 13);
        Chalet house3 = new Chalet("16 king fahad St, ", "Buraydah, ", true, "white, ", 13);
       System.out.println(house1.toString());

        System.out.println("house1 and house2 are equal? " + house1.equals(house2)); //true
        System.out.println("house1 and house3 are equal? " + house1.equals(house3)); //false


    }
}