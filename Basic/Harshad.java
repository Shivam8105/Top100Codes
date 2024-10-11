package Basic;

public class Harshad {

    static void HarshadNumber(int num) {
        int temp = num;
        int sum = 0;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if (num % sum == 0) {
            System.out.println("True");
        } else {
            System.out.println("false");
        }
    }

    public static void main(String[] args) {
        int num = 12345;
        HarshadNumber(num);
    }
}
