package Basic;

public class armstrong {

    public static boolean Armstrong(int num, int length){
        int sum = 0;
        int temp = num;
        while(temp!=0)
        {
            int digit = temp%10;
            sum = sum + (int)Math.pow(digit,length);
            temp /= 10;
        }
        return sum==num;
    }

    static int len(int num)
    {
        int length = 0 ;
        while(num!=0)
        {
            length++;
            num/=10;
        }
        return length;

    }
    public static void main(String[] args) {
        int num = 407;
        int length = len(num);
        if(Armstrong(num, length)){
            System.out.println(num + " is an Armstrong Number");
        }
        else
        {
            System.out.println(num + " is not an Armstrong Number");
        }
    }
}
