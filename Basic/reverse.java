package Basic;

public class reverse {

    public static void reverseN(int num)
    {
        int rev = 0;
        if(num == 0)
        {
            return;
        }
        while(num!=0)
        {
            int rem = num%10;
            rev = rev*10 + rem;
            num /= 10;
        }
        System.out.println(rev);
    }
    public static void main(String[] args) {
        int num = -41234;
        reverseN(num);
    }

}
