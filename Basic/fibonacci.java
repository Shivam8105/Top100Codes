package Basic;

public class fibonacci {
    public static void main(String[] args) {
        int a=0 , b=1;
        int nextTerm;
        int n = 15;
        System.out.println(a + " " + " " + b);
        for (int i = 2; i <=n; i++) {
            nextTerm = a+b;
            a=b;
            b=nextTerm;
            System.out.println(nextTerm);
        }
    }
}
