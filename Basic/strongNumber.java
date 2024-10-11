package Basic;

public class strongNumber {

    static int factorial(int digit)
    {
        int fact = 1;
        for (int i = 1; i <=digit ; i++) {
            fact = i*fact;
        }
        return fact;
    }

    static boolean strong(int num)
    {
        int digit, sum = 0;
        int temp = num;
        while(temp!=0)
        {
            digit = temp%10;
            sum += factorial(digit);
            temp /= 10;
        }
        return sum==num;
    }
    public static void main(String[] args) {
        int num = 145;
        System.out.println(strong(num));
    }
}
