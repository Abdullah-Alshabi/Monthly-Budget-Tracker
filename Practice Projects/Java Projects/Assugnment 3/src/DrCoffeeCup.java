public class DrCoffeeCup {

    private final List<CoffeeMenuItem> menu = new ArrayList<>();
    private static final double SMALL_CUP_PRICE = 8.0;
    private static final double MEDIUM_CUP_PRICE_INCREASE_PERCENTAGE = 20.0;
    private static final double LARGE_CUP_PRICE_INCREASE_PERCENTAGE = 35.0;
    private static final double EXTRA_LARGE_CUP_PRICE_INCREASE_PERCENTAGE = 50.0;

    private static final double MILK_PRICE_PER_SHOT = 2.0;
    private static final double CREAM_PRICE_PER_SHOT = 2.0;
    private static final double CHOCOLATE_PRICE_PER_SHOT = 3.0;
    private static final double CINNAMON_PRICE_PER_SHOT = 1.0;

    public DrCoffeeCup() {
        // Add each coffee type to the menu
        menu.add(new CoffeeMenuItem("Coffee", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Espresso", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Cappuccino", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Flat white", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Macchiato", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Latte", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Irish coffee", SMALL_CUP_PRICE));
        menu.add(new CoffeeMenuItem("Turkish coffee", SMALL_CUP_PRICE));
    }

    public void sellCoffee() {

        // Prompt the customer to choose a coffee type
        System.out.println("Please choose a coffee type:");
        for (int i = 0; i < menu.size(); i++) {
            System.out.println(i + 1 + ". " + menu.get(i).getName());
        }

        // Get the customer's choice
        int coffeeTypeChoice = Integer.parseInt(System.console().readLine());

        // Get the customer's cup size choice
        System.out.println("Please choose a cup size:");
        System.out.println("1. Small");
        System.out.println("2. Medium");
        System.out.println("3. Large");
        System.out.println("4. Extra large");

        int cupSizeChoice = Integer.parseInt(System.console().readLine());

        // Calculate the price of the coffee
        double price = menu.get(coffeeTypeChoice - 1).getPrice();

        // Calculate the price increase for the cup size
        if (cupSizeChoice == 2) {
            price += price * MEDIUM_CUP_PRICE_INCREASE_PERCENTAGE / 100.0;
        } else if (cupSizeChoice == 3) {
            price += price * LARGE_CUP_PRICE_INCREASE_PERCENTAGE / 100.0;
        } else if (cupSizeChoice == 4) {
            price += price * EXTRA_LARGE_CUP_PRICE_INCREASE_PERCENTAGE / 100.0;
        }

        // Prompt the customer to add additives
        System.out.println("Do you want to add any additives? (y/n)");
        String addAdditivesChoice = System.console().readLine();

        // Add additives to the coffee
        if (addAdditivesChoice.equals("y")) {
            boolean doneAddingAdditives = false;
            while (!doneAddingAdditives) {
                System.out.println("Please choose an additive:");
                System.out.println("1. Milk");
                System.out.println("2. Cream");
                System.out.println("3. Chocolate");
                System.out.println("4. Cinnamon");

                int additiveChoice = Integer.parseInt(System.console().readLine()); }}

                switch (additiveChoice) {
                    case 1:
                        price += MILK_PRICE_PER_SHOT;
                        break;
                    case 2:
                        price}
                }} 