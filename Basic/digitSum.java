package Basic;

public class digitSum {
    public static int main(String[] args) {
        int num = 123456;
        int sum = 0;
        while(num!=0)
        {
            sum += num%10;
            num = num/10;
        }
        return sum;
    }
}
