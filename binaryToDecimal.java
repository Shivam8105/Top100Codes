package Top100Codes;

import java.util.*;
public class binaryToDecimal {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the binary number: ");
        int binary = in.nextInt();
        int num = binary;
        in.close();
        int n = 0;
        int decimal = 0;

        while(binary > 0){
            int temp = binary % 10;
            decimal += temp * Math.pow(2,n);
            binary /= 10;
            n++;
        }
        System.out.println("Decimal value of " + num + " is: " + decimal);
    }
}

