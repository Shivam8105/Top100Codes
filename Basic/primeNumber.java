package Basic;

public class primeNumber {

    public static void checkPrime(int num){
        int count = 0;
        if(num<2)
        {
            System.out.println("Not a prime");
        }
        for (int i = 1; i <= num; i++) {
            if(num%i==0){
                count++;
            }
        }
        if(count<2){
            System.out.println("Prime Number");
        }
        else{
            System.out.println("Not a prime");
        }
    }

    public static void isPrime(int num)
    {
        boolean isprime = true;
        for(int i=2; i <= num/2; i++)
         {
             if(num % i == 0)
             {
                 isprime = false;
                 break;
             }
         }
         String result = isprime ? "Prime" : "Not Prime";
         System.out.println(result);
    }

    public static void main(String[] args) {
        int num = 100;
        checkPrime(num);
        isPrime(num);
    }
}
