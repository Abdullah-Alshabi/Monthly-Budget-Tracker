import java.util.regex.Matcher;
import java.util.regex.Pattern;

class PickupTimeParser {
    public static void timeToPickup(String time) {
        String pattern = "\\b(1[012]|0[0-9]):([0-5][0-9]) ?(?i)(am|pm)\\b";
        Pattern r = Pattern.compile(pattern);

        Matcher m = r.matcher(time);
        if (m.find()) {
            int pickupHour = Integer.parseInt(m.group(1));
            int pickupMinutes = Integer.parseInt(m.group(2));
            String meridiem = m.group(3).toLowerCase();

            if (meridiem.equals("pm") && pickupHour != 12) {
                pickupHour += 12;
            } else if (meridiem.equals("am") && pickupHour == 12) {
                pickupHour = 0;
            }

            System.out.println("Pickup Time - Hours: " + pickupHour + ", Minutes: " + pickupMinutes);
        } else {
            System.out.println("Invalid time format");
        }
    }
}

