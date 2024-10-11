package Basic;
public class factorial {
    public static void main(String[] args) {
        int num = 9;
        int fact = 1;
        for (int i = 2; i <= num; i++) {
            fact *= i;
        }
        System.out.println(fact);
    }
}
