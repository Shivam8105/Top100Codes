package Basic;

public class perfectSqr {
    public static void main(String[] args) {
        int num = 49;
        int sr =(int)Math.sqrt(num);
        if((sr*sr)==num)
        {
            System.out.println("Perfect Square");
        }
        else{
            System.out.println("Not a perfect Square");
        }
    }
}
