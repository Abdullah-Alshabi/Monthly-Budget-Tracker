class car {
    string name = "gmc";
    string color = "white";
    int price = 100000;
    public:
    car();
    car(int price);
    car(string name, int price);

    void display();
    int add(int a, int b);
    };
 
 class abood {
    int age;
    string address;

    public:
    abood();
    abood(int age);
    abood(string adress);
 };