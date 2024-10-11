package WorkingWithNumber;

public class lcm {
    public static void main(String[] args) {
        int num1 = 36, num2 = 60, lcm = 0;
        int max = (num1 > num2) ? num1 : num2;
        for (int i = max; i <= num1 * num2; i++) {
            if (i % num1 == 0 && i % num2 == 0) {
                lcm = i;
                break;
            }
        }
        System.out.println("The LCM: " + lcm);
    }
}

// int lcm = (num1 * num2) / hcf; this can also be used for calculation of lcm