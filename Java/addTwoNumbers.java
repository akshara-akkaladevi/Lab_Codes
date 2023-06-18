import java.util.Scanner;

class AddTwo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in));
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int sum = num1 + num2;
        System.out.println("The sum of a and b is: "+sum);
    }
}