import java.util.Scanner;

public class compoundInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double principal = sc.nextDouble();
        double rate = sc.nextDouble();
        double time = sc.nextDouble();
        double compoundInterest = principal * (Math.pow((1 + rate / 100), time));
        System.out.println("The compound interest is: " + compoundInterest);
    }
}
