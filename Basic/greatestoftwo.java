package Basic;
import java.util.Scanner;
class greatestoftwo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = sc.nextInt();
        int second = sc.nextInt();
        //logic
        if(first>second)
        {
            System.out.println("first is largest");
        }
        else if(first<second)
        {
            System.out.println("second is largest");
        }
        else
        {
            System.out.println("Equal Numbers");
        }
        sc.close();
    }
}