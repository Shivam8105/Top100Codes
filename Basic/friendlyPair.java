package Basic;

import java.util.Scanner;

public class friendlyPair {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Bhai = sc.nextInt();
        int bhai = sc.nextInt();
        int sum = 0;
        int sum_ = 0;
        for (int i = 1; i < Bhai; i++) {
            if (Bhai % i == 0) {
                sum += i;
            }
        }
        for (int i = 1; i < Bhai; i++) {
            if (bhai % i == 0) {
                sum_ += i;
            }
        }
        if (Bhai % sum == bhai % sum_) {
            System.out.println("Bhai-Bhai");
        } else {
            System.out.println("Tu Mera Bhai Nahi hai");
        }
        sc.close();
    }
}
