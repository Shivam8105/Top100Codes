package Basic;

public class automorphic {

    public static boolean Automorphic(int num, int square) {
        while (num!= 0) {
            if (num % 10 != square % 10){
                return false;
            }
            num/=10;
            square/=10;
        }
        return true;
    }

    public static void main(String[] args) {
        int num = 12;
        int square = num * num;
        System.out.println(Automorphic(num, square));
    }
}
