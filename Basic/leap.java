package Basic;

import java.util.Scanner;

public class leap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();

        // int flag = (year%400 == 0) || (year%4==0 && year%100!=0 ) ? 1 : 0;   another variable

        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            System.out.println("It's a Leap Year");
        }
        else
        {
            System.out.println("Not a leap Year");
        }
        sc.close();
    }
}
