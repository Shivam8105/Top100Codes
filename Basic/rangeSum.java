package Basic;
import java.util.Scanner;
public class rangeSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int initialRange = sc.nextInt();
        int finalRange = sc.nextInt();
        int sum = 0;
        for (int i = initialRange; i <= finalRange; i++) {
            sum += i;
        }
        System.out.println(sum);
        sc.close();
    }
}
