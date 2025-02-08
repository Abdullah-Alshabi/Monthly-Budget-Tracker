class DiscountCalculator {
    public static double getDiscount(int numberOfCups) {
        int discount = 0;
        while (numberOfCups >= 3) {
            discount += 5;
            numberOfCups -= 3;
        }
        return discount;
    }
}
