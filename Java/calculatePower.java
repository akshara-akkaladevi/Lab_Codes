import java.util.Scanner;
public class calculatePower{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int base = sc.nextInt();
        int exponent = sc.nextInt();
        int result = (int) Math.pow(base, exponent);
        System.out.println("The result is: "+result);
    }
}