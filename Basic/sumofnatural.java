package Basic;
import java.util.Scanner;
public class sumofnatural {

    public static int Sum(int num)
    {
        //using loop 
        int sum = 0 ;
        for (int i = 1; i <=num; i++) {
            sum+=i;
        }
        return sum;

        //formula
        // sum = (num*(num+1)/2);
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(Sum(num));
        sc.close();
    }
}
