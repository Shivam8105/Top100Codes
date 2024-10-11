package WorkingWithNumber;
import java.util.*;
public class hextodec {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String hex = sc.nextLine();
        int val =0;
        hex.toUpperCase();
        String digits = "0123456789ABCDEF";
        for (int i = 0; i < hex.length(); i++) {
            char c = hex.charAt(i);
            int d = digits.indexOf(c);
            val = val*16 + d;
        }
        System.out.println(val);
        sc.close();
    }
}
