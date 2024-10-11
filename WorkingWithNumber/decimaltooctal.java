package WorkingWithNumber;
import java.util.*;
public class decimaltooctal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int decimal = sc.nextInt();
        int octal[] = new int[200];
        int i =0;
        while(decimal>0)
        {
            int r = decimal%8;
            octal[i++]= r;
            decimal/=8;
        }
        for (int j = i-1; j >=0 ; j--) {
            System.out.print(octal[j]);
        }
        sc.close();
    }
}
