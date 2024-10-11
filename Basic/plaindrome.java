package Basic;

import java.util.Scanner;

public class plaindrome {

    public static boolean isPalindrome(int num){
        int temp = num;
        int rev = 0;
        while(temp!=0)
        {
            int rem = temp%10;
            rev = rev * 10 + rem;
            temp/=10;
        }
        if(rev==num)
        {
            return true;
        }
        else{
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isPalindrome(num);
        sc.close();
    }
}
