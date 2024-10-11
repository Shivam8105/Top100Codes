package Basic;

public class primeinRange {

    public static boolean checkPrime(int i)
    {
        int count = 0 ;
        if(i<2)
        {
            return false;
        }

        if(i==2)
        {
            return true;
        }

        for (int j = 2; j <= i; j++) {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count>2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    public static void main(String[] args) {
        int lower = 11;
        int upper = 100;
        for(int i = lower; i <= upper ; i++)
        {
            if (checkPrime(i))
            {
                System.out.println(i);
            }
        }
    }
}
