import java.util.HashMap;
import java.util.Map;

class Coffee {
    private static int count = 0;

    private enum CupSize {
        SMALL, MEDIUM, LARGE, EXTRA_LARGE
    }

    private static final Map<String, Integer> coffeePrices = new HashMap<>();

    static {
        coffeePrices.put("Coffee", 8);
        coffeePrices.put("Espresso", 14);
        coffeePrices.put("Cappuccino", 12);
        coffeePrices.put("Flat white", 13);
        coffeePrices.put("Macchiato", 15);
        coffeePrices.put("Latte", 15);
        coffeePrices.put("Irish coffee", 16);
        coffeePrices.put("Turkish coffee", 17);
    }

    private CupSize size;

    public void setSize(String size) {
        this.size = CupSize.valueOf(size.toUpperCase());
    }

    public double getPrice() {
        double basePrice = coffeePrices.get("Coffee");
        if (size == CupSize.MEDIUM) {
            basePrice *= 1.20;
        } else if (size == CupSize.LARGE) {
            basePrice *= 1.35;
        } else if (size == CupSize.EXTRA_LARGE) {
            basePrice *= 1.50;
        }
        return basePrice;
    }

    public static int getCount() {
        return count;
    }

    public Coffee() {
        count++;
    }
}
