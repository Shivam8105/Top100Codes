package Basic;
import java.util.Scanner;
public class greatestofthree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if(a<b)
        {
            if(b>c)
            {
                System.out.println("b is largest");
            }
            else
            {
                System.out.println("c is largest");
            }
        }
        else
        {
            System.out.println("a is largest");
        }
        sc.close();
    }
}
