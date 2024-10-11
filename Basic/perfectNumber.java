package Basic;

public class perfectNumber {
    public static void main(String[] args) {
        int num = 90;
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if(num%i==0)
            {
                sum += i;
            }
        }
        if(sum==num)
        {
            System.out.println("perfect");
        }
        else
        {
            System.out.println("not perfect");
        }
    }
}
